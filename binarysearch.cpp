#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

void binarysearch(vector<int>arr,int element)

{
    sort(arr.begin(),arr.end());
    int ans=-1;

    int l=0,h=arr.size()-1;
    while(l<=h)
    {
        int mid =(l+h)/2;
        if(arr[mid]==element)
        {
            ans=1;
            cout<<"Element found at "<<mid<<" index "<<endl;
            break;
        }
        else if(arr[mid]<element)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        
    }

    if(ans==-1)
    {
        cout<<"Element not found "<<endl;
    }
}
int main()
{
    binarysearch({23,34,44,55,67,78,87},98);
    return 0;
}
