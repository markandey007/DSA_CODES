#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger
(long long int arr[],long long int n, long long int k) {
    vector<long long int>ans;
    deque<long long int> dq;
          for(int i=0; i<k; i++){
              if(arr[i]<0)  dq.push_back(i);
          }
        
         if(dq.size()>0) ans.push_back(arr[dq.front()]);
          else ans.push_back(0);
          ///rem windows
          
          for(int i=k; i<n;i++){
                 if(!dq.empty() && (i - dq.front())>=k ) {
                 dq.pop_front();
             }
             
             //then push current element
             if(arr[i] < 0)
                dq.push_back(i);
             
            // put in ans
            if(dq.size() > 0) {
                 ans.push_back(arr[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }
          }
          return ans;
 }