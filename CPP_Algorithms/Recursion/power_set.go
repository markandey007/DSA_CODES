// This is a program to find out all the sub-sequences of a given string
// This is solved using Recursion
// Power Set can be solved using (2^n) where n = length of a string

package main

import "fmt"

// take, non-take approach we can use here basically

func PowerSet(str string, i int, cur string) {
	if i == len(str) {
		fmt.Println(cur)
		return
	}
	PowerSet(str, i+1, cur+string(str[i]))
	PowerSet(str, i+1, cur)
}

func main() {
	var str string
	cur := ""
	fmt.Println("Please enter the string from which u have to find subsequences")
	fmt.Scan(&str)

	PowerSet(str, 0, cur)
}
