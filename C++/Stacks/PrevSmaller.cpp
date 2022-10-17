# include <bits/stdc++.h>
using namespace std;
void prevSmaller(int A[],int n) {
    stack<int> st;
    st.push(-1);
    vector<int>ans(n);
    for(int i=0; i< n; i++){
        while(st.top()>=A[i]){ st.pop();
        }
        ans[i]=st.top();
        st.push(A[i]);
    }
    for(int i=0; i< n;i++){
        cout<<ans[i]<<" ";
    }
}



int main(){
 
 int arr[5]={4,5,2,10,8};
 int n=5;
 prevSmaller(arr,n);
}
//A = [4, 5, 2, 10, 8]
//Output 1:
   // G = [-1, 4, -1, 2, 2]