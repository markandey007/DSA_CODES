#include <bits/stdc++.h>
using namespace std;
int main(){
unordered_map<char,int> m;
pair<char,int>p= make_pair('a',3);
m.insert(p);
m['b']=2;
cout<<m.size()<<endl;

cout<<m.count('a')<<endl;
cout<<m['m'];
}