package main

import "fmt"

func staircase(size int) {
	for i := size; i > 0; i-- {
		spaceLen := i - 1
		for j := 0; j < size; j++ {
			if spaceLen > 0 {
				fmt.Printf(" ")
				spaceLen--
			} else {
				fmt.Printf("#")
			}
		}
		fmt.Println()
	}
}

func main() {
	var size int
	fmt.Scanln(&size)

	staircase(size)
}
