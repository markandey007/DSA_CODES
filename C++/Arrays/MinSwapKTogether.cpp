#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int minSwap(int arr[], int n, int k) {
        int count=0;
        int bad=0;
        int ans;
        for (int i=0 ; i < n; i++){
            if (arr[i]<=k){
                count ++;
            }
        }
        if (count ==0 ){
            return 0;
        }
        for (int i=0; i<count; i++){
            if (arr[i]>k){
                bad++;
            }
        }
        ans=bad;
       for (int i=0,j=count; j< n; i++,j++){
           if(arr[i]>k)
           bad--;
           if(arr[j]>k)
           bad++;
           ans=min(ans,bad);
           
       }
     return ans;
 }
int main(){
    int n=7;
    int k=6;
    int arr[11]={2, 7, 9, 5, 8, 7, 4};
    cout<<endl<<"min->"<<minSwap(arr, n , k)<<endl;
    return 0;
}