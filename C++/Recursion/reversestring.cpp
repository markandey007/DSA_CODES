#include <bits/stdc++.h>
using namespace std;
void reverse (string &n,int s,int e){
    if(s>=e) return;
    swap(n[s],n[e]);
    cout<<n[s]<<" "<<n[e];
    reverse(n,s+1,e-1);
}
int main(){
    string s="Anand";
    reverse(s,0,4);
    cout<<endl;
    cout<<s;
    return 0;
}