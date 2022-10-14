#include <iostream>
using namespace std;
int isprime(int n){
    for (int i=2; i<n; i++){
        int count =0;
        if (n%i==0){
            return false;
        }
        else {
            count ++;
           
        }
       return count;
    }
   
}
int main(){
    int number;
    cout<<"number->";
    cin>>number;
    cout<<isprime(number);
    return 0;
}