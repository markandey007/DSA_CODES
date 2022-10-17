#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int firstocc(int arr[], int n, int x){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == x){
            ans = mid;
            e = mid - 1;
        }
        else if(x > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(x < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    //cout<<ans;
    return ans;
}
int main(){
    int n=7;
    int arr[7]={1 ,1 ,2 ,2 ,2 ,2 ,3};
    int x=3;
    cout<<firstocc(arr, n, x);
    cout<<lastocc(arr, n, x);
    return 0;
}