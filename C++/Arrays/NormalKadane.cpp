#include <bits/stdc++.h>
using namespace std;
long long kdane(int arr[], int n){
        int sum=0;
        int ans=INT_MIN;
        int start=0;
        int end=0;
        for (int i=0; i< n ; i++){
            sum+=arr[i];
            //cout<<"("<<"sum->"<<sum<<")";
            if(ans<sum){
                end=i;
            }
            ans=max(ans, sum);

            if(sum<=0){
            sum=0;
            start=i+1;
            }
        }
        cout<<"START->"<<start<<" "<<"END->"<<end<<" ";
        return ans;
    }
    int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<kdane(arr,n);
    //printarray(arr, n);
    return 0;
}