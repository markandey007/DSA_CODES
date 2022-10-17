#include<iostream>
using namespace std;
void transpose(int arr[3][3], int n){
 for(int i=0; i<n;i++){
    for(int j=0; j<i; j++){
        swap(arr[i][j],arr[j][i]);
    }
 }
}
void reverse(int arr[3][3], int n){
    for(int i=0; i<n;i++){
       for(int j=0; j<n/2; j++){
        swap(arr[i][j],arr[i][n-j-1]);
       } 
    }
}
int main(){
    int arr[3][3];
    int n=3;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    transpose(arr, n);
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}