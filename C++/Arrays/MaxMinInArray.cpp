#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int getMax(int arr[], int n){
 int ans=INT_MIN;
 for (int i=0; i<n ; i++){
       if(arr[i]>ans){
           ans=arr[i];
       }
    }
    return ans;
}
int getMin(int arr[], int n){
 int ans=INT_MAX;
 for (int i=0; i<n ; i++){
       if(arr[i]<ans){
           ans=arr[i];
       }
    }
    return ans;
}
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    cout<<"MAX->"<<getMax(arr, n)<<endl;
    cout<<"MIN->"<<getMin(arr, n)<<endl;
    printarray(arr, n);
    return 0;
}