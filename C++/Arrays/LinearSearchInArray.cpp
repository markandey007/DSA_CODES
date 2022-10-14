#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n, int e){
   
    for (int i=0; i<n ; i++){
        if (arr[i]==e){
             cout<<"Element Found.";
             return;
        }
        
    }
    cout<<"Element Not Found";
}
int main(){
    int n=6;
    int e;    //ekement to ne searched
    int arr[6]={1,2,3,4,5,6};
    cout<<"Enter Element to search->";
    cin>>e;

    printarray(arr, n, e);
    return 0;
}