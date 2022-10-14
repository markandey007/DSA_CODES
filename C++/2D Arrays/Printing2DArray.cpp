
#include<iostream>
using namespace std;
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