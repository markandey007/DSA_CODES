
#include<iostream>
using namespace std;
void columnwisesum(int arr[3][3], int n){
    int sum=0;
    for(int j=0; j<n; j++){
        for (int i=0; i< n; i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    return;
}
int main(){
    int arr[3][3];
    int n=3;
    cout<<"e->";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    columnwisesum(arr, n);
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}