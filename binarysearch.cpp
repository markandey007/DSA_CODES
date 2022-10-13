#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int val)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(arr[mid]==val)
        {return mid;}
        else if(arr[mid]>val)
        {end=mid-1;}
        else
        {start=mid+1;}
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    cin>>val;
    cout<<binarysearch(arr,n,val)<<endl;
    return 0;
}
