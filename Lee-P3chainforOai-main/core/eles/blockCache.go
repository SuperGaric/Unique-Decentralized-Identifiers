package eles

import (
	"fmt"
	"p3Chain/common"
	"sync"
	"time"
)

// BlockCache is used to collect blocks uploaded by subnet leaders.
type BlockCache interface {
	Start()
	Stop()
	IsExist(blockID common.Hash) bool                  // back whether a block is existed in block cache using the block ID
	AddLocalBlock(block *Block)                        // upload a local block generated by lower-level consensus
	AddRemoteBlock(block *Block)                       // collect blocks received from others subnets
	RemoveBlock(blockID common.Hash)                   // remove a block from the block cache
	RetrieveBlock(blockID common.Hash) (*Block, error) // retrieve a block using the block ID
	BackLocalBlocks() []*Block                         // back the local blocks still in cache
	MarkLocalBlock(blockID common.Hash)                // mark a local block
	BackUnmarkedLocalBlock() []*Block                  // back the unmarked local blocks
}

const (
	blockTimeLife = 30 * time.Second
	expireCircle  = 5 * time.Second
)

// To manage blocks generated from local subnet and other subnets.
type CommonBlockCache struct {
	cacheMux   sync.RWMutex
	blockCache map[common.Hash]*blockState

	quit chan struct{}
}

func (cbc *CommonBlockCache) MarkLocalBlock(blockID common.Hash) {
	cbc.cacheMux.Lock()
	defer cbc.cacheMux.Unlock()
	if bs, ok := cbc.blockCache[blockID]; ok {
		bs.mark = true
	}
}

func (cbc *CommonBlockCache) BackUnmarkedLocalBlock() []*Block {
	cbc.cacheMux.RLock()
	defer cbc.cacheMux.RUnlock()

	localBlocks := make([]*Block, 0)
	for _, state := range cbc.blockCache {
		if state.local && (!state.mark) {
			localBlocks = append(localBlocks, state.block)
		}
	}

	return localBlocks
}

func (cbc *CommonBlockCache) Start() {
	cbc.blockCache = make(map[common.Hash]*blockState)
	cbc.quit = make(chan struct{})
	go cbc.update()
}

func (cbc *CommonBlockCache) Stop() {
	//TODO implement me
	panic("implement me")
}

func (cbc *CommonBlockCache) IsExist(blockID common.Hash) bool {
	cbc.cacheMux.RLock()
	defer cbc.cacheMux.RUnlock()

	if _, ok := cbc.blockCache[blockID]; ok {
		return true
	} else {
		return false
	}
}

func (cbc *CommonBlockCache) AddLocalBlock(block *Block) {
	cbc.cacheMux.Lock()
	defer cbc.cacheMux.Unlock()
	state := &blockState{
		local:       true,
		checkInTime: time.Now(),
		block:       block,
	}
	cbc.blockCache[block.BlockID] = state
}

func (cbc *CommonBlockCache) AddRemoteBlock(block *Block) {
	cbc.cacheMux.Lock()
	defer cbc.cacheMux.Unlock()
	state := &blockState{
		local:       false,
		checkInTime: time.Now(),
		block:       block,
	}
	cbc.blockCache[block.BlockID] = state
}

// If there is no such block with referred blockID, no operation would
// do, but just return
func (cbc *CommonBlockCache) RemoveBlock(blockID common.Hash) {
	cbc.cacheMux.Lock()
	defer cbc.cacheMux.Unlock()

	delete(cbc.blockCache, blockID)
}

// Retrieves a block with the given blockID. If no such block, returns an error.
func (cbc *CommonBlockCache) RetrieveBlock(blockID common.Hash) (*Block, error) {
	cbc.cacheMux.RLock()
	defer cbc.cacheMux.RUnlock()

	if state, ok := cbc.blockCache[blockID]; !ok {
		return nil, fmt.Errorf("fail in retrieve block, no such block")
	} else {
		return state.block, nil
	}
}

// Back the local blocks that are still in block cache (probably those that miss getting consensus).
func (cbc *CommonBlockCache) BackLocalBlocks() []*Block {
	cbc.cacheMux.RLock()
	defer cbc.cacheMux.RUnlock()

	localBlocks := make([]*Block, 0)
	for _, state := range cbc.blockCache {
		if state.local {
			localBlocks = append(localBlocks, state.block)
		}
	}
	return localBlocks
}

type blockState struct {
	local       bool
	mark        bool
	checkInTime time.Time
	block       *Block
}

func (cbc *CommonBlockCache) expire() {
	cbc.cacheMux.Lock()
	defer cbc.cacheMux.Unlock()

	now := time.Now()
	expireThreshold := now.Add(-blockTimeLife)

	for blockID, state := range cbc.blockCache {
		if state.checkInTime.Before(expireThreshold) {
			delete(cbc.blockCache, blockID)
		}
	}
}

func (cbc *CommonBlockCache) update() {
	expireTicker := time.NewTicker(expireCircle)
	for {
		select {
		case <-expireTicker.C:
			cbc.expire()
		case <-cbc.quit:
			return
		}
	}
}
