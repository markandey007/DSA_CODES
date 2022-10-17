#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n)
{
    cout << "Printing Array ->";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr[], int s, int e){
      while(s<e){
        cout<<" "<<s<<e;
          swap(arr[s], arr[e]);
          s++;
          e--;    
  }
  cout<<"nikla";
}
void reverseInGroups(int arr[], int n, int k){
     int i=0;
        int j=min(n-1, k-1);
        while(i<n){
            cout<<i<<j;
        reverse(arr, i, j);
        i+=k;
        j=min(n-1,j+k);
        }

}
int main()
{
    int n = 5;
    int arr[5] = {35, 56, 48, 21, 87};
    int k=77;
    printarray(arr, n);
    reverseInGroups(arr, n,k);
    printarray(arr, n);
    return 0;
}