#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmaller(vector<int> arr){
    stack<int> st;
    st.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--){
        int item = arr[i];
        while(  arr[st.top()] >= item ){
            st.pop();
    cout<<"hi";
        }
        if(st.top() == -1)
            ans[i] = n;
        else
           ans[i] = st.top(); 

        st.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> arr){
    stack<int> st;
    st.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=0 ; i<n ; i++){
        int item = arr[i];
        while( st.top()!=-1 && arr[st.top()] >= item){
            st.pop();
        }
        ans[i] = st.top(); 
        st.push(i);
    }
    cout<<"jo";
    return ans;
}

int largestRectangleArea(vector<int> heights){
    cout<<heights.size();
    vector<int> next(heights.size());
    next=nextSmaller(heights);
    vector<int> prev (heights.size());
    prev = prevSmaller(heights);

    int maxArea = INT_MIN;
    for(int i=0 ; i<heights.size() ; i++){
        int newArea = heights[i] * (next[i] - prev[i] - 1) ;
        maxArea = max(maxArea,newArea);
    }
    return maxArea;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    int area = largestRectangleArea(heights);
    cout << "Largest area is " << area << endl;
    return 0;
}