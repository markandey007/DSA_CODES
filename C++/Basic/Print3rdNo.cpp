#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>10000 && n<99999){
        for(int i=1;i<=3;i++){
            if(i==3) cout<<n%10;
            n=n/10;
        }
    }
            else cout<<-1;
}