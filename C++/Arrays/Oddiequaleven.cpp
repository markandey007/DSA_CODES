#include <bits/stdc++.h>
using namespace std;
int cntIndexesToMakeBalance(int arr[], int n)
{
	if (n == 1) {
		return 1;
	}
	if (n == 2)
		return 0;
	int se = 0;
	int so = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			se+=arr[i];
		}
		else {
			so+=arr[i];
		}
	}
	int cO = 0;
	int cE = arr[0];
	int res = 0;
	int newE= 0;
	int newO = 0;
	for (int i = 1; i < n - 1; i++) {
		if (i % 2) {
			cO += arr[i];
			newE = cE + so
			- cO;
			newO = cO + se
						- cE - arr[i];
		}
		else {
			cE += arr[i];
			newO = cO+ se
						- cE;
			newE = cE + so
						- cO - arr[i];
		}
		if (newE== newO) {
			res++;
		}
	}
	if (so== se - arr[0]) {
		res++;
	}
	if (n % 2 == 1) {
		if (so == se - arr[n - 1]) {
			res++;
		}
	}

	else {
		if (se == so - arr[n - 1]) {
			res++;
		}
	}

	return res;
}

int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>n;
    }
	cout << cntIndexesToMakeBalance(arr, n);
	return 0;
}
