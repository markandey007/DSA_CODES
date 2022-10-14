#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int findMin(int nums[],int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(nums[mid] >= nums[0])
        {
            
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
        // cout<<"hi"<<mid<<"-<";
    }
     cout<<s<<e<<mid;
    return nums[mid];
    } 
int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
         s=mid+1;

        } 
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start=s;
    int end=e;
    //cout<<"s->"<<s<<" e->"<<e<<endl;
    int mid=s+(e-s)/2;
    while(start<end){ 
        //cout<<mid;
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    cout<<"mid->"<<mid;
    return -1;
}




int findPosition(int arr[], int n, int k)
{
    int pivot=getPivot(arr,n);
    //cout<<"pivot->"<<arr[pivot]<<endl;
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

int main(){
    int n=8;
    int k=13;
    int nums[8]={11,13,15,17,1,4,5,6};
   //cout<<findMin(nums,n)<<endl;
   cout<<findPosition(nums,n,k);
    return 0;
}