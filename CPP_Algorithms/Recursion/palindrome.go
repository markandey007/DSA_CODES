// Here is the Program to find out the palindrome of a string using Recursion

package main

import "fmt"

func Palindrome(str string, start int, end int) string {
	if start >= end {
		return "YES"
	}

	if str[start] != str[end] {
		return "NOT"
	}
	return Palindrome(str, start+1, end-1)
}

func main() {
	var str string
	fmt.Println("Please enter the string to verify palindrome")
	fmt.Scan(&str)
	fmt.Printf("Given string is %s a palindrome", Palindrome(str, 0, len(str)-1))

}
