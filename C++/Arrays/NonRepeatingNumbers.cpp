#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void single(int nums[],int n){
        for(int i=0; i< n;i++){
          int num=abs(nums[i]);
          nums[num-1]*=-1;
       }
       for(int i=0; i< n; i++){
           cout<<nums[i]<<" ";
       }
}  


int main(){
    int n=6;
    int arr[6]={1,2,3,2,1,4};
   single (arr,n);
    return 0;
}