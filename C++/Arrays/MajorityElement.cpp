#include<bits/stdc++.h>
using namespace std;

    int majorityElement(int a[], int size)
    {
    int count=1; int res=0;
    for(int i=1; i<size; i++){
        if(a[res]==a[i])
        count++;
        else
        count--;

        if(count==0){
            count=1;
            res=i;
        }
    }
   count=0;
        //2nd step
        for( int i=0; i<size; i++){
            if(a[res]==a[i])
            count++;
        }
        if(count<=(size/2))
        return -1;
        else if(count>=(size/2))
        return a[res]; 
    
    }
int main(){

        int n=8;
        
        int arr[8]={3,1,3,3,2,3,3,5};
        cout<<majorityElement(arr, n) << endl;
    }

   