package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func minMaxSum(arr []int) {
	min := arr[0]
	max := arr[0]
	sum := 0
	for _, d := range arr {
		if min > d {
			min = d
		}
		if max < d {
			max = d
		}
		sum += d
	}
	fmt.Printf("%d %d", sum-max, sum-min)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	numStr := strings.Fields(scanner.Text())

	var num []int
	for i := 0; i < 5; i++ {
		d, _ := strconv.Atoi(numStr[i])
		num = append(num, d)
	}
	minMaxSum(num)
}
