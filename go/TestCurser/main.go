package main

import (
	"fmt"
)

func main() {
	n := 0
	recursive(n)
}

func recursive(n int) {
	n++

	if n < 10 {
		fmt.Println(n)
		recursive(n)
	}
}
