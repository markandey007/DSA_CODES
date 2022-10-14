#include <bits/stdc++.h>
using namespace std;
int fibbo(int n){
if (n==0 || n==1) return n;
return fibbo(n-1)+fibbo(n-2);
}

int solveMem(int n, vector<int>& dp) {
    //base case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1; 
    //step3 
    if(dp[n] != -1) {
        return dp[n];
    }
    int ans = solveMem(n-1, dp) + solveMem(n-2, dp);
    //step2
    return dp[n] = ans;
}

int solveTab(int nthTerm) {
    //step1: createa DP array
    vector<int> dp(nthTerm+1, 0);

    //step2: update DP array, basis on Recursion Base case
    dp[0] = 0;
    dp[1] = 1;

    //step3: find range and copy paste
    for(int n=2; n<=nthTerm; n++) {
        int ans = dp[n-1] + dp[n-2];
        dp[n] = ans;
    }
    return dp[nthTerm];
}

int solveTabSO(int nthTerm) {
    //step1: replace dp array with your optimised storage strcutures && remove dp array creation and updation part
    int prev1 = 1;
    int prev2 = 0;
    int curr;

    //step2: dp values -> replace -> prev1, prev2
    for(int n=2; n<=nthTerm; n++) {
        int ans = prev1 + prev2;
        curr = ans;
        //step3: take care of the movement and updation of prev1, prev2
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int main(){
    int n;
    cin>>n;
    int ans=fibbo(n);
    cout<<ans<<endl;

    vector<int>dp(n+1,-1);
    int ans2=solveMem(n,dp);
    cout<<ans2<<endl;

    int ans3=solveTabSO(n);
    cout<<ans3<<endl;

    int ans4=solveTab(n);
    cout<<ans4<<endl;
    return 0;
}