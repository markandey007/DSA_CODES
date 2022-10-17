#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n)
{
    cout << "Printing Array ->";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
 bool find3Numbers(int A[], int n, int X)
    {
 sort(A , A+n);
	    for (int k=0; k < n-3; k++){
	    int x= X-A[k];
	    int i=k+1;
	    int j=n-1;
	    while(i!=j){
	        if(A[i]+A[j]==x){
	            return true;
	        }
	        else if(A[i]+A[j]<x){
	            i++;
	        }
	        else{
	            j--;
	        }
	     }
	    }
	    return false;
    }

int main()
{
    int n = 24;
    int K = 986;
    int A[24] = {557, 217, 627, 358, 527, 358, 338, 272, 870, 362, 897, 23, 618, 113, 718, 697, 586, 42, 424, 130, 230, 566, 560, 933};
    printarray(A, n);
    cout<< "ans"<<find3Numbers(A, n, K)<<endl;
     printarray(A, n);
    return 0;
}