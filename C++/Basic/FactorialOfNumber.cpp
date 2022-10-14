#include <iostream>
using namespace std;
int factorial(int n){

    int ans=1;
    for (int i=n; i>0; i--){
        ans= ans * i;
        
        n--;
    }
    return ans;
}
int main (){
    int number;
    cout<<"Enter number:-";
    cin>>number;
    cout<<"FActorial:-" <<factorial(number);

    return 0;
}