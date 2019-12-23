// HackerRank Algorithm - Birthday Chocolate
// https://www.hackerrank.com/challenges/the-birthday-bar/problem
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func birthday(s []int, d, m int) int {
	var count int
	chocoSquare := len(s)
	for i := 0; i < chocoSquare; i++ {
		sum := 0
		for j := i; j < i+m && j < chocoSquare; j++ {
			sum += s[j]
		}
		if sum == d {
			count++
		}
	}
	return count
}

func main() {
	var n int
	fmt.Scanln(&n)

	scanner := bufio.NewScanner(os.Stdin)

	scanner.Scan()
	sStr := strings.Fields(scanner.Text())

	var s []int
	for i := 0; i < n; i++ {
		d, _ := strconv.Atoi(sStr[i])
		s = append(s, d)
	}

	scanner.Scan()
	dmStr := strings.Fields(scanner.Text())
	d, _ := strconv.Atoi(dmStr[0])
	m, _ := strconv.Atoi(dmStr[1])

	fmt.Println(birthday(s, d, m))
}
