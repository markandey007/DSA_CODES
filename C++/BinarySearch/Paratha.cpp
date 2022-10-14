#include <bits/stdc++.h>
using namespace std;
bool ispossiblesol(int mid, int rank[],int paratha, int size){
    int sum=0;
   // cout<<paratha;
     //cout<<mid<<" ";
    for(int i=0; i<size;i++){ 
        int time=mid;
    int k=1;
    int p=0;   
        while(time>0){
            time=time-k*rank[i];
           // if (i==0) cout<<time<<" ";
           if(time>=0){ 
            p++;
            k++;
           }
        }
        sum+=p;
        cout<<sum<<" ";
    }
   // cout<<endl;
   // cout<<sum<<" ";
    if(sum<paratha) return false;
    return true;

}
int solve(int arr[], int n,int size){
    int ans=0;
    int s=0;
    int e= arr[1]*(n*(n+1))/2;
   // cout<<e<<" ";
    int mid= s+(e-s)/2;
   // cout<<mid<<" ";
    
    while(s<=e){
        if(ispossiblesol(mid,arr,n,size)){
            ans=mid;
          //  cout<<mid<<" ";
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    
        mid= s+(e-s)/2;
         //cout<<mid<<" ";
    }
    return ans;
}
int main(){
    int n=10;
    int rank[5]={4,1,2,3,4};
    int size = sizeof(rank)/sizeof(int);
    cout<<solve(rank, n,size);
    return 0;
}
