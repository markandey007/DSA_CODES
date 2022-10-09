package main

import "fmt"

func FindGCD(a int, b int) int {
	if a == 0 {
		return b
	}
	return FindGCD(a-b, b)
}

func main() {
	var a, b int
	fmt.Println("Enter the two numbers to find GCD")
	fmt.Scan(&a, &b)
	res := FindGCD(a, b)
	fmt.Printf("The GCD of two numbers is %d", res)

}
