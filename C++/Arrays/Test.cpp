#include <bits/stdc++.h>
using namespace std;
 void totaldays(int A[], int N) {
        int kd=N;
		sort(A,A+N);
		int day=0;
		int rtps=0;      //rem if we take =a[i]
		int mul=1;		// troops barracks
		for (int i=0; i< kd;i++){
		int tps=0;
			while(tps+rtps<A[i]){
				tps=tps+mul;
				day++;				//training days
			}
			cout<<endl;
			if(tps+rtps>=A[i]){
				rtps= tps+rtps-A[i]; 
				mul++;				//barcks prodduction +1
			}
		}
       cout<<day;
    }
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	totaldays(arr,n);
	return 0;
}
