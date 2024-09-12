#include <bits/stdc++.h>
#define int long long
#define ll long long int
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, x, n) for (int i = n - 1; i >= x; i--)
#define vi vector<int>
using namespace std;


//sorting and merging the array....
void merge(int arr[], int low, int high)
{
    int mid=low+(high-low)/2, i=low, j=mid+1, k=low;
    int temp[100];  //1st store the sorted array in temp[] then at last assign the values to the main arr[];

    //2 pointer approach... 
    //                      1st array->   0 <= i <= mid
    //                      2nd array->   mid < j <= high
    //sort the values and then store it into temp[]...
    while(i<=mid && j<=high)
    {
        if(arr[i]>arr[j])
        {
            temp[k]=arr[j];
            k++; j++;
        }
        else 
        {
            temp[k]=arr[i];
            k++; i++;
        }
    }

    // if j reached high (j>high) but i doesn't reached mid (i<mid)...
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++; i++;
    }

    // if i reached mid (i>mid) but j doesn't reached high (j<high)...
    while(j<=high)
    {
        temp[k]=arr[j];
        k++; j++;
    }

    //assigning the value of temp[] to the main arr[]....
    for(int i=low; i<=high; i++)
        arr[i]=temp[i];
}

void merge_sort(int arr[], int low, int high)
{
    if(low>=high)    return;
    int mid=low+(high-low)/2;

    //2 pointer approach... 
    //                      1st array->   0 <= i <= mid
    //                      2nd array->   mid < j <= high

    // breaking(not actually) the array into 2 arrays from middle...
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);

    //sorting and merging the 2 arrays..
    merge(arr, low, high);
}

void code()
{
    int n;
    cin>>n;
    int arr[n];
    loop(i,0,n) cin>>arr[i];
    merge_sort(arr, 0, n-1);
    loop(i,0,n) cout<<arr[i]<<" ";
}

signed main()
{
    cin.tie(NULL);
    cout.tie(NULL);
        code();
    return 0;
}
