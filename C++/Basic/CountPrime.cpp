#include <bits/stdc++.h>
using namespace std;
int countprime(int n){
    vector<bool> prime(n+1, true);
    int count=0;
    prime[0] = prime[1] = false;

    for (int i=2; i<n; i++)
    {
        
        if (prime[i] == true)
        {
            for (int j=2*i; j<n ; j=j+i){
                cout<<j<<" "<<endl;
                prime[j] = false;
                
            }
        }
        
        cout<<endl;
        if (prime [i] == true)
            count ++;
        
    }
    return count;
}
int main(){
    int n=10;
    cout<<"count is->"<<countprime(n);
    return 0;
}