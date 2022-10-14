#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5];
    int n=5;
    cout<<"Enter the marks of Students->";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //counting occurences and storing in array count
    int count[5]={0};  //initialising whith 0 and if found +1
    int c=0;
    int i=0;
    while (i<n)
    {
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count[i]++;
        }
        i++;
    }
    //print the array which contains count of marks
    printarray(count,5);
    //if the marks occurs only one print
    for(int i=0; i<n; i++){
        if(count[i]==1) cout<<arr[i]<<" ";
    }
    return 0;
}