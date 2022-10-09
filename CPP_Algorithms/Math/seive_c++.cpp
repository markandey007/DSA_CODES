#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/*
    This is a program to find out Prime Numbers in between range of the numbers
    It return true if the number is Prime and False if not-prime
    It used algorithm named - Seive of Eratosthenes
*/

void FindPrimeUsingSeive(int num) {
    //creating map of given range size having value initially true 
    int size, i, j;
    unordered_map<int, bool> Prime;
    unordered_map<int, bool> :: iterator itr;

    for(i = 1; i <= num; i++) {
        Prime[i] = true;
    }
    //Now all numbers having status as true
    //Now using main logic
    Prime[1] = false;
    for(i = 2; i * i <= num; i++) {
        for(j = 2 * i; j <= num; j = j + i) {
            Prime[j] = false;
        }
    }
    for (itr = Prime.begin(); itr != Prime.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
}

int main() {
    int num, i, j;
    cout << "Enter the Range of Numbers to find no of prime" << endl;
    cin >> num;
    FindPrimeUsingSeive(num);
    return 0;

}