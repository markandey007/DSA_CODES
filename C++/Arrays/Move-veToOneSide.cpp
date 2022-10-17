 #include <bits/stdc++.h>
using namespace std;
void segregateElements(int arr[],int n)
    {
    int  i=0;
    int j=1;
    while (j<=n){
        if (arr[i]>0){
            i++;
            j++;
        }
        else if (arr[j]>0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else {
           
            j++;
      }
     }
    }
    #include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=8;
    int arr[8] = {1, -1, 3, 2, -7, -5, 11, 6 };
    segregateElements(arr, n);
    printarray(arr, n);
    return 0;
}