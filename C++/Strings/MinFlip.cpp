#include<bits/stdc++.h>
using namespace std;
int minFlips (string S)
{
    int n=S.length();
    int flip=0;
    int flip2=0;
 for(int i=0; i<n; i++){
     if ((i&1)==1){
         if(S[i]=='0')
         flip++;
     }
     else if((i&1)==0){
         if(S[i]=='1'){
         flip++;
     } 
     }
     //cout<<flip;
     flip2=n-flip;
 }
 return min(flip, flip2);
}
int main (){
    string S="001";
    cout<<minFlips(S);
    return 0;
}