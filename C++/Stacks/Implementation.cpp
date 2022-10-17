#include <bits/stdc++.h>
using namespace std;
class Stack{
    int arr[5];
    int top; 
    int size;

 public:
    Stack(int size){
       int*  arr=new int[size];
        top=-1;
        this->size=size;
    } 
    void push(int d){
        if(top!=size-1){
        top++;
        arr[top]=d;
        }
        else {
            cout<<"StackOverflow"<<endl;
        }
    }
    void pop(){
        if(top!=-1){
            top--;
        }
        else{
            cout<<"StackUnderflow"<<endl;
        }
    } 
    int peek (){
        if(top!=-1)
        cout<<arr[top]<<" ";
        else
        cout<<"Stack Is Empty"<<endl;
    }
    bool isempty(){
        if(top==-1) return true;
        else return false;
    }
};
int main(){
    Stack* st= new Stack(6);
    st->push(1);
    st->push(3);
    st->push(2);
    st->push(4);
    st->push(8);
    st->push(9);
    st->push(10);
    st->push(11);
    st->push(12);
    st->peek();
    st->pop();
    st->peek();
   
    cout<<st->isempty();
    Stack s(4);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    return 0;
}