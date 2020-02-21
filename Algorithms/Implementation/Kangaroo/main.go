package main

import "fmt"

func kangaroo(x1, v1, x2, v2 int) string {
	if v2 > v1 {
		return "NO"
	} else if v2 == v1 && x1 != x2 {
		return "NO"
	}

	for !(((x1 > x2) && (v1 > v2)) || ((x1 < x2) && (v1 < v2))) {
		x1 = x1 + v1
		x2 = x2 + v2
		if x1 == x2 {
			return "YES"
		}
	}
	return "NO"
}

func main() {
	var x1, v1, x2, v2 int
	fmt.Scanln(&x1, &v1, &x2, &v2)
	fmt.Println(kangaroo(x1, v1, x2, v2))
}
