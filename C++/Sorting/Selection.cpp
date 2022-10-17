#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i]) swap(arr[i],arr[j]);
        }
    }
} 
int main(){
    int n=7;
    int arr[7]={1,3,2,5,4,6,7};
   sort(arr,n);
   printarray(arr,n);
    return 0;
}