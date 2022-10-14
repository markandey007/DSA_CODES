#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>=2)
            {
                return arr[i];
            }
        }
        return ans;
    }
int main(){
    int n=7;
    int arr[7]={1, 5, 3, 4, 3, 5, 6};
    cout<<"FR->"<<firstRepeated(arr, n);
    return 0;
}