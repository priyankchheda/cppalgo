package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
	"strings"
)

func countApplesAndOranges(s, t, a, b int, apples, oranges []int) {
	var appleCount int
	for _, apple := range apples {
		distance := apple + a
		if distance >= s && distance <= t {
			appleCount++
		}
	}

	var orangeCount int
	for _, orange := range oranges {
		distance := orange + b
		if distance >= s && distance <= t {
			orangeCount++
		}
	}
	fmt.Println(appleCount)
	fmt.Println(orangeCount)
}

func readline(reader *bufio.Reader) []string {
	line, _, err := reader.ReadLine()
	if err != nil {
		log.Fatalln(err)
	}
	return strings.Split(string(line), " ")
}

func main() {
	var a, b, s, t, m, n int
	fmt.Scanln(&s, &t)
	fmt.Scanln(&a, &b)
	fmt.Scanln(&m, &n)

	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	var apples []int
	appleStr := readline(reader)
	for i := 0; i < m; i++ {
		d, _ := strconv.Atoi(appleStr[i])
		apples = append(apples, d)
	}

	var oranges []int
	orangeStr := readline(reader)
	for i := 0; i < n; i++ {
		d, _ := strconv.Atoi(orangeStr[i])
		oranges = append(oranges, d)
	}

	countApplesAndOranges(s, t, a, b, apples, oranges)
}
