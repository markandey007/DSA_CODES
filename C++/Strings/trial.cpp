//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string arr){
   
   int n=arr.length();
         int a[n];
        int c=0;
     if (n==0 || n==1){
         return;
     }
     for(int i=0 ; i< n ;i++){
         if (arr[i]>=0){
             a[c]=arr[i];
             c++;
         }
     }
    for(int i=0 ; i< n ;i++){
         if (arr[i]<0){
             a[c]=arr[i];
             c++;
         }
     }
     for(int i=0 ; i< n ;i++){
         arr[i]=a[i];
     }
     
}