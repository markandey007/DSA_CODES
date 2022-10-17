#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
        int s=0;
        int r=0;
        int bal=0;
        while(p[s].petrol<p[s].distance) s++,r++;
        cout<<r<<" ";

   }         
};
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends