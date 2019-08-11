package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
	"strings"
)

func birthdayCakeCandles(arr []int) int {
	max := -999999
	count := 0
	for _, d := range arr {
		if max == d {
			count++
		} else if max < d {
			max = d
			count = 1
		}
	}
	return count
}

func main() {
	var length int
	fmt.Scanln(&length)

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

	var num []int
	numStr := strings.Split(lineStr, " ")
	for i := 0; i < length; i++ {
		d, _ := strconv.Atoi(numStr[i])
		num = append(num, d)
	}

	fmt.Println(birthdayCakeCandles(num))
}
