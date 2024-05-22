package main

import "testing"

func TestExtractAccuracy(t *testing.T) {
	str1 := "loss: 2.0156    accuracy: 0.52110"
	str2 := "loss: 2.0178    accuracy: 0.50110"
	acc1, err := ExtractAccuracy(str1)
	if err != nil {
		t.Fatalf("fail in extract: %v", err)
	}
	acc2, err := ExtractAccuracy(str2)
	if err != nil {
		t.Fatalf("fail in extract: %v", err)
	}
	if acc1 < acc2 {
		t.Fatalf("fail!")
	}
	t.Logf("acc1 is %f, acc2 is %f", acc1, acc2)
}
