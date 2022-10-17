#include<iostream>
#include<stack>
using namespace std;


void sortedInsert(stack<int> &s, int data) {
    //base case
    if(s.empty() || s.top() < data) {
        s.push(data);
        return ;
    }

    int topElement = s.top();
    s.pop();

    //Recursive call
    sortedInsert(s,data);

    s.push(topElement);
}

void sortStack(stack<int>& s) {
    //base case;

    if(s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    //Recursive Call
    sortStack(s);

    //sortedInsert 
    sortedInsert(s, topElement);

}

int main() {

    stack<int> s;

    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);

    //functioncall
    sortStack(s);

    cout << "Printing answer" << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}