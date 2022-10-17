#include <bits/stdc++.h>
using namespace std;

//simple sieve
vector<int>*sieve(int n){

   bool isPrime[n];
    for(int i=0;i<n;i++){
        isPrime[i]=true;
    }
    for(int i=2;i*i<n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<n;j+=i){
                isPrime[j]=false;
            }
        }
    }
   vector<int>*primes=new vector<int>();
    primes->push_back(2);
    for(int i=3;i<n;i+=2){
        if(isPrime[i]){
            primes->push_back(i);
        }
    }
    return primes;
}
 //ab root l-r ka jo simple sieve hai uske jitne multiple l se r ke range me hai unhe false krna hai
void printPrimes(long long l,long long r,vector<int>*&primes){
    //l se r ka vector jiski indexing 0 se
    bool isPrime[r-l+1];
    for(int i=0;i<=r-l;i++){
        isPrime[i]=true;
   }
    for(int i=0;primes->at(i)*(long long)primes->at(i)<=r;i++){
        int currPrime=primes->at(i);
       // Just smaller or equal value tol
       long long base=(1/(currPrime))*(currPrime);
        if(base<1){
            base=base+currPrime;
        }
       // Mark all mutliples  false
        for(long long j=base;j<=r;j+=currPrime){
            isPrime[j-l]=false;
        }
       
       // There may beacase where base is itself a prime number.|
        if(base=currPrime){
            isPrime[base-l]=true;
       }
       }
        for(int i=0;i<=r-l;i++){
          if(isPrime[i]== true){
           cout <<i+l<< endl;
          }
       }
}       
int main()
{
    long long l,r;
    cin >>l>>r;
    // 0 se r ke root tk ke primes
    vector<int>*primes= sieve(r-l+1);
    //pura root ke multiples jo l se r me hai wo prime
    printPrimes(l,r,primes);
return 0;
}