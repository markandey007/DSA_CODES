#include <bits/stdc++.h>
using namespace std;
void getmid(stack<int> s,int m){
    while(s.size()!=m) s.pop();
    cout<<s.top();
}
int main (){
    stack<int> s;
    s.push(1);
     s.push(2);
     s.push(3);
 s.push(4);
 s.push(5);
 s.push(6);
 int m= s.size()/2;
getmid(s,m);
}