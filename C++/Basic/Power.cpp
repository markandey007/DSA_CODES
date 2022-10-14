#include <iostream>
using namespace std;
int powernum(int a,int b){
    int ans=1;
    while(b>0){
        //cout<<"b->"<<b<<" ";
        //cout<<"ans->"<<ans<<" ";
        if(b&1){
           // cout<<"even"<<" ";
           ans=ans*a;
           a=a*a;
            b=b/2;
        }
        else{
        //ans=ans*a;
        a=a*a;
        b=b/2;
        }
    }
    return ans;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    //cout<<a<<" "<<b;
    cout<<powernum(a,b);
}