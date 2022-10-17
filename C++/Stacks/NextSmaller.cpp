#include <bits/stdc++.h>
using namespace std;
    vector<int> help_classmate(int arr[], int n) 
    { 
      vector<int>ans;
        stack<int>s;
        s.push(-1);
        s.push(-1);
       s.push(-1);
       
       s.push(-1);
       
       
        for(int i=n-1;i>=0;i--){
            if(arr[i]>s.top()){
                cout<<arr[i]<<" "<<s.top()<<",";
                ans.push_back(s.top());
                s.push(arr[i]);
            }
            else if(arr[i]<s.top()){
                while(s.top()>arr[i]){ s.pop();
            if(s.top()==arr[i]) s.pop();
                }
                ans.push_back(s.top());
                s.push(arr[i]);
                 cout<<arr[i]<<" "<<s.top()<<",";
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<endl<<"ans->";
        for(int i=0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }

int main(){
 int arr[9]={4 ,1 ,4 ,10, 9, 1, 1, 6, 6};
 int n=9;
 help_classmate(arr,n); 
    return 0;
}
