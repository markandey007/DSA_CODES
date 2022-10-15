//floyd triangle
#include <bits/stdc++.h>
using namespace std;

void FloydTriangle(int n)
{
	int value = 1;
	for (int i = 1; i <= n+1; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << value++ << " ";
		cout << endl;
	}
}


int main()
{
    int n;
    cout<<"Enter height of triangle:";
    cin>>n;
	FloydTriangle(n);
	return 0;
}

