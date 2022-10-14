#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 bool areRotations(string s1,string s2)
    {
      if(s1.size()!=s2.size()) return false;
        
        int n = s2.size();
        for(int j = 0;j<n;j++){
            cout<<"j->"<<j<<" ";
            int i = 0;
            while(i<n && s1[(i+j)%n]==s2[i]) i++;
            cout<<"s"<<s1[(i+j)%n]<<" ";
              cout<<"i->"<<i<<" ";
            if(i==n) return true;
        }
        return false;
    
    }
int main(){
    string s1="geeksforgeeks";
    string s2="forgeeksgeeks";
    cout<<areRotations(s1,s2);
    return 0;
}