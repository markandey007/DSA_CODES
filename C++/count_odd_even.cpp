#include<iostream>
using namespace std;
void oe(int arr[],int n)
{
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
          even++;
        else
          odd++;
    }
    cout<<"no of odd numbers:"<<odd<<endl;
    cout<<"no of even numbers:"<<even;    
}
int main(){
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    oe(arr,n);
    return 0;
}
