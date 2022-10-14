#include<iostream>
using namespace std;
int gcd (int a, int b ){
       if (a==0 ){
            return b;
        }
        if (b==0 ){
            return a;
        }
    while (a!=b){
     
        if (a>b){
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}
int main(){
    int n1,n2;
    cout<<"Enter numbers :-";
    cin>>n1>>n2;
    int ans=gcd(n1, n2);
    cout<<"GCD is ->"<<ans;
    return 0;
}