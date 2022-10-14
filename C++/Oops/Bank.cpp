
#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int balance;

   //constructor
   bank(string name){
        balance=0;
        this->name=name;
    } 


    void deposit(int bal){
        cout<<name<<" deposted amt : "<<bal<<endl;
        balance += bal;
    }
    void withdraw(int amt){
        if(balance<amt) {cout<<" Insufficient balance"<<endl;
        }
        else 
        cout<<name<<" withdrawal rupees "<<amt;
        balance -= amt;
        cout<<endl;
    }

    int seebalance(string name){
        if(name==this->name){
        cout<<name<<" has amount of ";
        return balance;
        }
        else
        cout<<"Wrong Acc Name"<<endl;
        return -1;
    }

};
int main(){
    //creating Acc1 with name rahul

   bank Acc1 ("Rahul");
   Acc1.deposit(500);
   Acc1.withdraw(600);
   Acc1.deposit(500);


   //creating Acc2 with name babbar
   bank Acc2 ("babbar");
   Acc2.deposit(5000);
   Acc2.withdraw(600);
   Acc2.deposit(601);
   cout<<Acc2.seebalance("babbar");
   cout<<endl;
   cout<<Acc1.seebalance("babbar");
   cout<<endl;
   cout<<Acc1.seebalance("Rahul");

}