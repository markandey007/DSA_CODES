#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int dtb(int n)
{
  int ans = 0;
  int i = 0;
  int x = 1;
  while (n != 0)
  {
    int bit = n & 1;

    ans = (bit * x) + ans;
    x = x * 10;

    n = n >> 1;

    i++;
  }
  return ans;
}
int main()
{
  int number;
  cout << "Enter Number:-";
  cin >> number;
  cout << "Your number;-" << number << endl;
  cout << "binaryry:-" << dtb(number);
  return 0;
}