// Program for finding trailing zeros in the factorial of a number;

package main

import "fmt"

func main() {
	var n int
	var i int
	res := 0
	fmt.Scan(&n)
	//Finding total no of pairs of (2,5) for getting all trailing zeros in the factorial of a number
	for i = 5; i <= n; i = i * 5 {
		res = res + (n / i)
	}
	fmt.Println(res)

}
