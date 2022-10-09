package main

import "fmt"

//Program to calculate a^b using recursion

func PowerRecurse(a int, b int) int {
	if b == 1 {
		return a * 1
	}
	return a * PowerRecurse(a, b-1)
}

func main() {
	var a, b int
	fmt.Println("Please Enter value of a and b")
	fmt.Scan(&a, &b)
	res := PowerRecurse(a, b)
	fmt.Printf("The answer is:%d", res)
}
