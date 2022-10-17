#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
 int findPlatform(int arr[], int dep[], int n)
    {
        	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int platform =0;
    	int ans= platform;
        int i=0;
        int j=0;
        while(i<n &&j < n){
            if (arr[i]<=dep[j]){
                platform++;
                i++;
            }
            else {
            platform--;
            j++;
        }
        ans =max (ans , platform);
        }
    	return ans;
    }
int main(){
    int n=6;
     int arr[6]={900, 940, 950, 1100, 1500, 1800};
    int dep[6]={910, 1200, 1120, 1130, 1900, 2000};
    cout<<findPlatform(arr,dep,n);
    //printarray(arr, n);
    return 0;
}
