#include <bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n==1) return 1; 
     if(n==2) return 1; 
    int ans=fibbo(n-2)+fibbo(n-1);
    return ans;
}
int main(){
    int n=9;
    cout<<fibbo(n);
    return 0;
}