#include <bits/stdc++.h>
using namespace std;

void insertatmid (int n, int arr[], int x)
{
 int mid=n/2;
 for(int i=n;i>=mid; i--){
  arr[i+1]=arr[i];
 }
 arr[mid]=x;
}


int main ()
{
  int arr[100];
  cout << "enter the elements of array" << endl;
  int n=4;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int x;
  cout<<"Enter Element->";
  cin >> x;
  insertatmid (n, arr, x);
  for (int i = 0; i <=n; i++)
    {
      cout << arr[i] << " ";
    }
  return 0;
}