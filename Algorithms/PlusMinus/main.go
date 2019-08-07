package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func plusMinus(arr []int) {
	length := float32(len(arr))
	var positive, negative, zero float32
	for _, d := range arr {
		if d > 0 {
			positive++
		} else if d < 0 {
			negative++
		} else {
			zero++
		}
	}
	fmt.Printf("%.6f\n", positive/length)
	fmt.Printf("%.6f\n", negative/length)
	fmt.Printf("%.6f\n", zero/length)
}

func main() {
	var length int
	fmt.Scanln(&length)

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	numStr := strings.Fields(scanner.Text())

	var num []int
	for i := 0; i < length; i++ {
		d, _ := strconv.Atoi(numStr[i])
		num = append(num, d)
	}
	plusMinus(num)
}
