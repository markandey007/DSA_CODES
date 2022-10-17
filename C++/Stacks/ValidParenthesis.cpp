#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cout << "Enter Parenthesis String : " << endl;
    cin >> str;

    int len = str.length();
    if (len & 1)
    { // odd
        cout << "No Need to check as string brackets doen't occur in pair" << endl;
        return -1;
    }

    stack<char> st;
    bool flag = true;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            // for opening brackets
            cout << "in opening " << ch << endl;
            st.push(ch);
        }
        else if(!st.empty()) {
                  char top = st.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) 
    
        {
            cout << "in closing 1 " << ch << endl;
            // for closing brackets
            st.pop();
        }
        }
        else
            flag = false;
    }
if (st.empty())
        flag = true;
    else
        flag = false;

    // ----------- checking flag
    if (flag)
        cout << "Valid Parenthesis" << endl;
    else
        cout << " NOT Valid Parenthesis" << endl;

    return 0;
}