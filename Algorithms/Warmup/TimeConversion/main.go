package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func timeConversion(s string) string {
	suffix := s[len(s)-2:]
	t := strings.Split(s, ":")
	t[2] = t[2][:2]

	if suffix == "PM" {
		if t[0] != "12" {
			a, _ := strconv.Atoi(t[0])
			t[0] = strconv.Itoa(a + 12)
		}
	} else if suffix == "AM" && t[0] == "12" {
		t[0] = "00"
	}

	return strings.Join(t, ":")
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	fmt.Println(timeConversion(scanner.Text()))
}
