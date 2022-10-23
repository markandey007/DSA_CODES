// Program to print a 2D array in wave form:
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int nrows, mcols;
    cout << "Enter the number of rows and columns" << endl;
    cin >> nrows >> mcols; 
    int arr[nrows][mcols];

    vector<int> ans;

    // Taking row wise input:
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < mcols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the elements of array:
    cout << "Your 2D array is:" << endl;
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < mcols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Traversing for waveprint:
    for (int col = 0; col < mcols; col++)
    {
        if (col & 1)
        {
            // For odd index ---> move bottom to top
            for (int row = nrows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // For 0 and even index ---> move top to bottom
            for (int row = 0; row <= nrows - 1; row++)
            {
                ans.push_back(arr[row][col]); //?
            }
        }
    }

    cout << "Printing the elements of array in wave form: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}