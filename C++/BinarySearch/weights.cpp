#include <bits/stdc++.h>
using namespace std;
    bool ispossible(int weights[], int days, int ans, int size){
        int mw = 0;
        int id = 1;
        for(int i=0; i<size; i++){
            if(mw <= ans) {
                cout<<"("<<ans<<")";
            mw+=weights[i];
        }
        else
        {
            id++;
            if(id > days ) {
            return false;
            mw=weights[i];
        } 
        }  
        cout<<mw;
        }
        return true;
    }
 int shipWithinDays(int weights[], int days,int size) {
            int start = 0,  end = 0,  ans = -1,  minans=1000;
        for(int index=0; index<size; index++){
            if(weights[index]<start){
                start = weights[index];
            }
            end += weights[index];
            }
       cout<<start<<" "<<end<<endl;
    while(start<=end){
            int mid = start + (end-start)/2;
            if(ispossible(weights, days, mid,size)){
            cout<<"true";
            ans = mid;
            minans=min(minans,ans);
            end = mid -1;
            }
            else{
            start = mid+1;  
            cout<<"false";
            }
            cout<<start<<" "<<end<<endl; 
            mid = start + (end-start)/2;          
    }
        return minans; 
    }
int main(){
    int n=6;
    int rank[6]={3,2,2,4,1,4};
    int days=3;
    cout<<shipWithinDays(rank, days,n);
    return 0;
}
