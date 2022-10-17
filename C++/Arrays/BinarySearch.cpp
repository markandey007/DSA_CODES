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
int binarysearch(int arr[], int n, int k)
{
   
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        cout << mid << " ";
        if (arr[mid] == k)
        {
            return mid;
          //  cout << "ho";
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
            //cout << "ho";
        }
        else
        {
            e = mid - 1;
           // cout << "ho";
        }
        mid = s + (e - s) / 2;
       // cout << mid << " ";
    }
    return -1;
}

int main()
{
    int n = 59;
    int arr[59] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};
    int k = 93;
    cout << binarysearch(arr, n, k);
    return 0;
}