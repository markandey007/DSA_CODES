#include<iostream>
#include<stack>
using namespace std;
int getmiddle(stack<int> &s, int n){
    int m=n/2;
    for(int i=0;i<m; i++){
        s.pop();
    }
     cout << s.top() << "b ";
}

int main() {

    int n;
    cout << "Enter Size->";
    cin >> n;
    int k=n;
    cout << "Enter Values->";
    stack<int> s;

    while(k-- ) {
        int data;
        cin >> data;
        s.push(data);
    }
    cout << endl;
    getmiddle(s,n);

    return 0;
}