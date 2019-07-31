package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func compareTriplets(a, b []int) []int {
	result := make([]int, 2)
	for i := 0; i < 3; i++ {
		if a[i] > b[i] {
			result[0]++
		} else if a[i] < b[i] {
			result[1]++
		}
	}
	return result
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	numStr1 := strings.Fields(scanner.Text())
	var num1 []int
	for i := 0; i < 3; i++ {
		d, _ := strconv.Atoi(numStr1[i])
		num1 = append(num1, d)
	}

	scanner.Scan()
	numStr2 := strings.Fields(scanner.Text())
	var num2 []int
	for i := 0; i < 3; i++ {
		d, _ := strconv.Atoi(numStr2[i])
		num2 = append(num2, d)
	}
	result := compareTriplets(num1, num2)
	fmt.Printf("%d %d", result[0], result[1])
}
