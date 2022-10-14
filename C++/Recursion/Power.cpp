#include <bits/stdc++.h>
using namespace std;
int power(int no, int p){
    if (p==1) return no;
    if (p==0) return 1;
    int ans=no*power(no,p-1);
    //cout<<ans;
    return ans;
}
int main(){
    int n=2;
    int p=10;
    cout<<power(n,p);
    return 0;
    }