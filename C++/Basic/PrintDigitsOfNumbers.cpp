#include<iostream>
using namespace std;
int pdn(int n){
    //Array size should be equal top digits in number.
    int arr[5];
    int i=0;
    while (n!=0){
        int b=n%10;
        arr[i]=b;
        n=n/10;
        i++;
    }
    cout<<endl;
    for (int i=0 ;i<5; i++){
      cout<<arr[i]<<endl;
      
    }
   
    
}
int main(){
    int number;
    cout<<"Enter number:-";
    cin>>number;
    cout<<endl<<"your number :-"<<number <<endl;
    pdn(number);
    return 0;
}