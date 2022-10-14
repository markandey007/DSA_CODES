#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
bool subarraysum(int arr[], int n) {
    vector<int>prefixsum;
        int sum=0;
        for (int i=0; i<n; i++){
            sum+=arr[i];
            prefixsum.push_back(sum);
        }
        for (int i=0; i<n; i++){
            if (prefixsum[i]==0){
                return true;
            }
         }
         
    }
int main(){
    int n=5;
    int arr[5]={4, 2, -3, 1, 6};
    subarraysum(arr,n);
    //return 0;
}