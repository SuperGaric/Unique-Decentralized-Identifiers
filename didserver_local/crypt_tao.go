    package main

    import (
    "fmt"
    "time"
    "github.com/my/repo/MyPKI/common"
    "github.com/my/repo/MyPKI/crypto"
    )

    func main() {
    fmt.Println("Starting PKI test...")
    var totalDuration time.Duration

    // Step 1: Generate an ECDSA key pair
    start := time.Now()
    privateKey, err := crypto.GenerateKey()

    if err != nil {
    panic(err)
    }

    elapsed := time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Key Generation: %s\n", elapsed)

    // Step 2: Retrieve the public key from the private key
    start = time.Now()
    publicKeyBytes := crypto.FromECDSAPub(&privateKey.PublicKey)

    if publicKeyBytes == nil {
    panic("Failed to retrieve public key")
    }

    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Retrieve Public Key: %s\n", elapsed)





    // Step 3: Generate Address from Public Key
    start = time.Now()
    address := crypto.PubkeyToAddress(privateKey.PublicKey)
    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Generate Address: %s\n", elapsed)

    // Step 4: Sign a message
    message := []byte("Hello, World!")
    hashBytes := crypto.Sha3(message)
    var hash common.Hash
    copy(hash[:], hashBytes) // Properly converting []byte to common.Hash
    start = time.Now()
    signature, err := crypto.SignHash(hash, privateKey)
    if err != nil {
    panic(err)
    }
    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Sign Message: %s\n", elapsed)

    // Step 5: Verify the signature
    start = time.Now()
    valid, err := crypto.SignatureValid(address, signature, hash)
    if err != nil {
    panic(err)
    }
    if !valid {
    panic("Signature verification failed")
    }
    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Verify Signature: %s\n", elapsed)

    // Step 6: Encrypt a message
    start = time.Now()
    ciphertext, err := crypto.Encrypt(&privateKey.PublicKey, message)
    if err != nil {
    panic(err)
    }
    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Encrypt Message: %s\n", elapsed)

    // Step 7: Decrypt the message
    start = time.Now()
    decryptedMessage, err := crypto.Decrypt(privateKey, ciphertext)
    if err != nil {
    panic(err)
    }
    if string(decryptedMessage) != string(message) {
    panic("Decryption failed")
    }
    elapsed = time.Since(start)
    totalDuration += elapsed
    fmt.Printf("Decrypt Message: %s\n", elapsed)

    // Total Duration
    fmt.Printf("Total Time Taken: %d us\n", totalDuration.Microseconds())
    fmt.Println("PKI test completed successfully.")
    }

