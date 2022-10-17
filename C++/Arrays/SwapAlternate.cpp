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
void swapalternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        swap(arr[i], arr[i+1]);
    }
}

int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printarray(arr, n);
    swapalternate(arr, n);
    printarray(arr, n);
    return 0;
}