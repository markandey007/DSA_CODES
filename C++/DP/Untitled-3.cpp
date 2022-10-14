//sum of las three digits in series
//n odd terms from the series
#include <bits/stdc++.h>
using namespace std;
void fib(int n,int &sum) {
    int r=n+n;
    int c=0;
        vector<int>fibo(r);
        
        fibo[0]=0;
        fibo[1]=1;
        fibo[2]=2;
        
        for(int i=3; i<r; i++){
            fibo[i] = fibo[i-1]+fibo[i-2]+fibo[i-3];
        }
        for(int i=1;i<=r;i++){
            cout<<fibo[i]<<" ";
        }
        cout<<endl;
        for(int i=1;c<n;i++){
            if(fibo[i]%2!=0 ) {
                c++;
                sum+=fibo[i];
                cout<<fibo[i]<<" ";
        }
        }
        
    }

// Driver Code
int main()
{
    int sum=0;
	int N = 6;
	fib(N,sum);
    cout<<endl;
    cout<<"Sum->"<<sum;
	return 0;
}
