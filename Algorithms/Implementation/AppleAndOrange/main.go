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
		if (apple + a) >= s {
			appleCount++
		}
	}

	var orangeCount int
	for _, orange := range oranges {
		if (orange + b) <= t {
			orangeCount++
		}
	}
	fmt.Println(appleCount)
	fmt.Println(orangeCount)
}

func readline() []string {
	reader := bufio.NewReader(os.Stdin)

	var lineStr string
	line, isPrefix, err := reader.ReadLine()
	if err != nil {
		log.Fatalln(err)
	}
	lineStr += string(line)
	for isPrefix {
		line, isPrefix, err = reader.ReadLine()
		if err != nil {
			log.Fatalln(err)
		}
		lineStr += string(line)
	}
	return strings.Split(lineStr, " ")
}

func main() {
	var a, b, s, t, m, n int
	fmt.Scanln(&s, &t)
	fmt.Scanln(&a, &b)
	fmt.Scanln(&m, &n)

	var apples []int
	appleStr := readline()
	fmt.Println(len(appleStr))
	for i := 0; i < m; i++ {
		d, _ := strconv.Atoi(appleStr[i])
		apples = append(apples, d)
	}

	var oranges []int
	orangeStr := readline()
	fmt.Println(len(orangeStr))
	for i := 0; i < n; i++ {
		d, _ := strconv.Atoi(orangeStr[i])
		oranges = append(oranges, d)
	}

	// countApplesAndOranges(s, t, a, b, apples, oranges)
}
