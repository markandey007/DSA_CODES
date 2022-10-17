#include <bits/stdc++.h>
using namespace std;
void count (int n){
    cout<<n<<" ";
    if (n==0) return;
    count(n-1);
    cout<<"hi ";
     cout<<n<<" ";
}
int main(){
    int n=5;
    count(n);
    return 0;
}