#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int mid = arr[0] + (arr[n-1]-arr[0])/2;
        for (int i=0; i< n ; i++){
            if (arr[i]<=mid)
            arr[i]+=k;
            else
            arr[i]-=k;
        }
        return arr[n-1]-arr[0];
    }
int main(){
    int n=4;
    int arr[4]={1, 5, 15, 10};
    int k=3;
    cout<<getMinDiff(arr,n,k);
    printarray(arr, n);
    return 0;
}