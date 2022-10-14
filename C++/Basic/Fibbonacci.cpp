#include <iostream>
using namespace std;
void fibbo(int n){
int first=0;
int second=1;
int sum;
for (int i=0; i<=n; i++){
    cout<<first;
    sum= first +second;
    first = second;
    second= sum;
}
}
int main(){
    
  int number;
    cout<<"Enter number:-";
    cin>>number;
    cout<<"Series:-";
    fibbo(number);
return 0;
}