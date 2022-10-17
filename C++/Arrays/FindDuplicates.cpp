#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
 int findDuplicates(int arr[], int n) {
        int ans=0;
        for (int i=0; i<n-1; i++){
            for (int j=i+1 ; j< n; j++){
               if (arr[i] == arr[j]){
               ans=arr[j];
               }
           }
        }
        return ans;
          }
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,3};
    //printarray(arr, n);
    cout<<"Ans->"<<findDuplicates(arr, n);
    //printarray(arr, n);
    return 0;
}