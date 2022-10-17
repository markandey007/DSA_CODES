#include <bits/stdc++.h>
using namespace std;

bool allsame(long long arr[], int  n){
    for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]) return false;
    }
    return true;
}
long long findLongestSubarray(long long arr[], int N){
       if(N==1)return N;
        if(allsame(arr,N))return N;
        long long int sum=arr[0];
        long long int ans=arr[0];
        long long int start=0;
       long long int end=0;
        for (int i=1; i< N ; i++){
            (sum&=arr[i]);
            if(ans<sum){
                end=i;
            }
            ans=max(ans, sum);
            
            if(sum<=0){
            sum=0;
            start=i+1;
            }
        }
        return end-start+1;
    }
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<findLongestSubarray( arr,n);
    //printarray(arr, n);
    return 0;
}