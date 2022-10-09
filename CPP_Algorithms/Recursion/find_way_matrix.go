// Problem : Find no of ways of traversal in (n*m) matrix from top left corner to bottom right corner

package main

import "fmt"

func FindWaysMatrix(a int, b int) int {
	if a == 1 || b == 1 {
		return 1
	}
	return FindWaysMatrix(a-1, b) + FindWaysMatrix(a, b-1)
}

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	//using recursion we will solve this problem by finding out the base condition
	res := FindWaysMatrix(a, b)
	fmt.Printf("The no of ways of traversal within the matrix is: %d", res)

}
