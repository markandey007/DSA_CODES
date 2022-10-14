#include <bits/stdc++.h>
using namespace std;
void moveAtEnd(string s, int i, int l)
{
    if (i >= l)
        return;
    char curr = s[i];
    if (curr != 'x')
        cout << curr;
    moveAtEnd(s, i + 1, l);
    if (curr == 'x')
        cout << curr;
    return;
}
int main()
{
	string s;
	cin >> s;
    int l=s.length();
    moveAtEnd(s,0,l);

    return 0;
}