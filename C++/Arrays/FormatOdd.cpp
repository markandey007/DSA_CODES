#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void form(int arr[], int n){
    for(int i=1; i< n; i++){
    if((i&1)!=0){
        if(arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
    }
}
}  
int main(){
    int n=5;
    int arr[5]={5,4,3,2,1};
   form(arr,n);
   printarray(arr,n);
    return 0;
}