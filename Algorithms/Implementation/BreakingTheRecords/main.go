package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
	"strings"
)

func breakingTheRecords(scores []int) (int, int) {
	var minCount, maxCount int
	min := scores[0]
	max := scores[0]

	for _, score := range scores {
		if score > max {
			max = score
			maxCount++
		} else if score < min {
			min = score
			minCount++
		}
	}
	return maxCount, minCount
}

func readline(reader *bufio.Reader) []string {
	line, _, err := reader.ReadLine()
	if err != nil {
		log.Fatalln(err)
	}
	return strings.Split(string(line), " ")
}

func main() {
	var n int
	fmt.Scanln(&n)

	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)
	var scores []int
	scoreStr := readline(reader)
	for i := 0; i < n; i++ {
		d, _ := strconv.Atoi(scoreStr[i])
		scores = append(scores, d)
	}

	maxCount, minCount := breakingTheRecords(scores)
	fmt.Printf("%d %d", maxCount, minCount)
}
