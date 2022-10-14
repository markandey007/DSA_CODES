#include <iostream>
#include<unordered_map>
using namespace std;
int maxlen(int arr[], int n){
    unordered_map<int,int>hM;

    int sum=0;
    int max_len=0;
    int ending_index=-1;

    for(int i=0; i<n; i++)
        arr[i] = (arr[i]==0) ? -1 : 1;
        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum==0){
                max_len=i+1;
                ending_index=i;
            }

            if(hM.find(sum)!=hM.end()){
                if(max_len<i-hM[sum]){
                    max_len=i-hM[sum];
                    ending_index=i;
                }
            }
            else
            hM[sum]=i;
        }
        return max_len;

}

int main(){
    int arr[]={1,0,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxlen(arr,n);
    return 0;
}