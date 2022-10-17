#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n)
{
    cout << "Printing Array ->";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr[], int n)
{
    int c = n;
    for (int i = 0; i < n / 2; i=i+2)
    {

        swap(arr[i], arr[c - 1]);
        c=c-2;
    }
}
int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};

    printarray(arr, n);
    reverse(arr, n);
    printarray(arr, n);
    return 0;
}