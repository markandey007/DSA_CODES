#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int n,int arr[]){
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            if(arr[j] > temp) {
              
                arr[j+1] = arr[j];
            }
            else { 
                break;
            }   
        }
        arr[j+1] = temp;  
    } 
}
int main(){
    int n=7;
    int arr[7]={9,8,75,6,4,3,1};
   insertionSort(n,arr);
   printarray(arr,n);
    return 0;
}