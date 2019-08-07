package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	var length int
	fmt.Scanln(&length)
	scanner := bufio.NewScanner(os.Stdin)

	matrix := make([][]int, length)
	for i := 0; i < length; i++ {
		scanner.Scan()
		numStr := strings.Fields(scanner.Text())

		var num []int
		for j := 0; j < length; j++ {
			d, _ := strconv.Atoi(numStr[j])
			num = append(num, d)
		}
		matrix[i] = num
	}

	diagonal1 := 0
	for i := 0; i < length; i++ {
		diagonal1 += matrix[i][i]
	}

	diagonal2 := 0
	for i := 0; i < length; i++ {
		diagonal2 += matrix[i][length-1-i]
	}

	result := diagonal2 - diagonal1
	if result < 0 {
		result *= -1
	}

	fmt.Println(result)
}
