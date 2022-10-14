#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int firstrepeating(int arr[], int n){
    unordered_map<int,int>map;
    for(int i=0; i< n ; i++){
        map[arr[i]]++;
    }
    for (int i=0; i < n;i++){
       if(  map[arr[i]]==1)
       return arr[i];
    }
   
    return -1;
}
int main(){
    int n=7;
    int arr[7]={1,2,1,4,5,4,2};
    //printarray(arr, n);
    cout<<firstrepeating(arr,n);
    return 0;
}