package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func simpleArraySum(ar []int) int {
	sum := 0
	for _, d := range ar {
		sum += d
	}
	return sum
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
	fmt.Println(simpleArraySum(num))
}
