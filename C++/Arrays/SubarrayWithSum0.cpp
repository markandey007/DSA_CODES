#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

 bool subArrayExists(int arr[], int n)
    {
        //Your code here
         vector<int>prefixsum;
        int sum=0;
        for (int i=0; i<n; ++i){
            sum+=arr[i];
            prefixsum.push_back(sum);
            cout<<sum<<" ";
        }
        cout<<endl;
        cout<<prefixsum.size()<<endl;
        sort(prefixsum.begin(), prefixsum.end());
        for (int i=0; i<n; i++){
            if(prefixsum[i]==0){
                return true;
            }
        }
         cout<<prefixsum[13]<<"-<";
         cout<<prefixsum.size()<<endl;
        for (int i=0; i<prefixsum.size(); i++){
            cout<<prefixsum[i]<<" ";
        }

         int k=0;
        int j=1;
        while(k<n-1){
            if(prefixsum[k]==prefixsum[j]){
                return true;
                k++;
                j++;
                
            }
            else{
                k++;
                j++;
            }
        }
        cout<<prefixsum[17]<<"-<";
        return false;
    }
int main(){
    int n=13;
    int arr[13]={12 ,33, -9, -2, -27, -26, 22, -28, 4, -15, -29, 7 ,15};
   cout<<subArrayExists(arr, n);
    return 0;
}