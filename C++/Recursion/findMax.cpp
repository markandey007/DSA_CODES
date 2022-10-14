#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}



int fmax(int arr[], int n,int ans){
    if(n==0)return ans;
    ans=arr[n];
    ans=max(ans,fmax(arr,n-1,ans));   
}  
int main(){
    int n=7;
    int ans=0;
    int arr[7]={1,2,6,5,9,7,4};
    cout<<fmax(arr,n,ans);
   
    return 0;
}