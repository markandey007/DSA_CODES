#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    
    
    if(n==0)
        return 1;

   // int smallerProblem = factorial(n-1);   
    int biggerProblem = n * factorial(n-1);

    return biggerProblem;
}

int main() {

    int n=5;
    

    cout<<factorial(n);

   

    return 0;
}