#include<iostream>
using namespace std;
void exp(int arr[],int n,int target){
    for(int i=0;i<n;i++){      
        for(int j=0;j<n;j++){
        if(arr[i]>arr[j]){
            if(arr[i]+arr[j]==target)
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
        }
    }

}
int main(){
    int arr[]={1,2,7,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    exp(arr,n,target);
    return 0;
}
