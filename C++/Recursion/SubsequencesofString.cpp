#include<iostream>
using namespace std;
void subsequence(string s,int i,int j,string ans){
    if(i==j){
        cout<<ans;
        cout<<endl;
        return;
    }
    subsequence(s,i+1,j,ans+s[i]);
    subsequence(s,i+1,j,ans);
}
int main(){
    string s="abc";
    string ans="";
    subsequence(s,0,3,ans);
}