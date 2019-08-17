package main

import "fmt"

func gradingStudents(grades []int) []int {
	var result []int
	for _, d := range grades {
		if d < 38 {
			result = append(result, d)
			continue
		}
		difference := 0
		value := d
		for value%5 != 0 {
			value++
			difference++
		}

		if difference < 3 {
			result = append(result, value)
		} else {
			result = append(result, d)
		}
	}
	return result
}

func main() {
	var length int
	fmt.Scanln(&length)

	var grades []int
	for i := 0; i < length; i++ {
		var temp int
		fmt.Scanln(&temp)
		grades = append(grades, temp)
	}
	for _, d := range gradingStudents(grades) {
		fmt.Println(d)
	}
}
