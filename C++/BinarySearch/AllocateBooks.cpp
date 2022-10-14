#include <bits/stdc++.h>
using namespace std;

bool isPossible(int time[], int n, int m, int mid){
    int day=1;
   long long int reqTime=0;

    for(int i=0; i<n; i++){
        if(reqTime+time[i]<=mid){
            reqTime+=time[i];
        }
        else{
            day++;
            if(day>m||time[i]>mid){
                return false;
            }
            reqTime=time[i];
        }
    }
    return true;
}

int allocateBooks(int time[], int n, int m) 
{
   long long int s=0;
   long long int sum=0;
    for(int i=0; i<n; i++){
        sum+=time[i];
    }
   long long int e=sum;
   long long int ans=-1;
   long long int mid=s+(e-s)/2;
   //cout<<mid<<" ";
   
    while(s<=e){
       // cout<<isPossible(time,n,m,mid)<<" ";
        if(isPossible(time,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        // cout<<mid<<" ";
    }

    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    int rank[n];
    for(int i=0;i<n;i++){
        cin>>rank[i];
    }
    
    cout<<allocateBooks(rank, n,m);
    return 0;
}