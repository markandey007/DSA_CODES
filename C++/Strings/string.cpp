#include<bits/stdc++.h>
using namespace std;
   string removeOccurrences(string s, string part) {
      int n=s.length();
        int m=part.length();
        int i=0;
        while (i<=n-m){
            for (int j=0;j<m;j++){
                if(s[i+j]==part[j]){
                    s.erase(s[i+j]);
                    i++;
                }
                   //i=0;
                   i++;
                   
            }
        }
                   return s;
    }
int main(){
    string s="daabcbaabcbc";
    string part = "abc";
    removeOccurrences(s,part);
}