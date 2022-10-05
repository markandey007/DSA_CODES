// This is a program of binarysearch in C++. Binarysearch have a runtime O(logn) so that
// it become very important search algorithm.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    
    // Looking for the mid element
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        
        // Looking for the right part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        
        // Looking for the left part
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    // We'll return -1 if the element is not in the array.
    return -1;
}

int main()
{
    int array[] = {1, 4, 7, 9, 12, 15, 17, 20};

    int index = binarySearch(array, 8, 17);
    cout << "The required index is " << index << endl;
}