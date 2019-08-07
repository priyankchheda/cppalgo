package main

import "fmt"

func solveMeFirst(a, b int) int {
	return a + b
}

func main() {
	var a, b int
	fmt.Scanf("%v\n%v", &a, &b)
	fmt.Println(solveMeFirst(a, b))
}
