package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func aVeryBigSum(ar []int64) int64 {
	var result int64
	for _, d := range ar {
		result += d
	}
	return result
}

func main() {
	var length int
	fmt.Scanln(&length)

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	numStr := strings.Fields(scanner.Text())
	var num []int64
	for i := 0; i < length; i++ {
		d, _ := strconv.ParseInt(numStr[i], 10, 64)
		num = append(num, d)
	}
	fmt.Println(aVeryBigSum(num))
}
