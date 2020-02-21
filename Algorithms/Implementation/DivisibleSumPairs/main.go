package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func divisibleSumPairs(n, k int, arr []int) int {
	var count int
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if (arr[i]+arr[j])%k == 0 {
				count++
			}
		}
	}
	return count
}

func main() {
	var n, k int
	fmt.Scanln(&n, &k)

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	arrStr := strings.Fields(scanner.Text())

	var arr []int
	for i := 0; i < n; i++ {
		d, _ := strconv.Atoi(arrStr[i])
		arr = append(arr, d)
	}
	fmt.Println(divisibleSumPairs(n, k, arr))
}
