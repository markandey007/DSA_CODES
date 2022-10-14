#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
 int kthLargest(int Arr[],int N,int K){
        vector<int> ans;
        int sum=0;
       for(int i=0; i< N; i++){
           for(int j=i; j<N; j++){
           sum+=Arr[j];
           ans.push_back(sum);
       }
           sum=0;
       }
       
       sort(ans.begin(), ans.end());
       
       return ans[ans.size()-K];
    }
    
int main(){
    int N=5;
    int K=3;
    int Arr[5]={-4, 5, -1, 0, 3};
    cout<<kthLargest( Arr, N, K);
    return 0;
}