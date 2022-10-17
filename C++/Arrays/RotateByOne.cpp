#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void rotatebyone(int arr[], int n){
     int temp=arr[n-1];
    for (int j=n-1; j>=0; j--){
        arr[j]=arr[j-1];
    }
    arr[0]= temp;
}
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    rotatebyone(arr, n);
    printarray(arr, n);
    return 0;
}