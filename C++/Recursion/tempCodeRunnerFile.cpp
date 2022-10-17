/*
    FIND FIRST OCCURENCE
        APPROACH 2 : DECREASING THE SIZE OF ARRAY
*/

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int index, int elementToFind)
{
    if (size == 0)
    {
        return -1;
    }
    if (arr[0] == elementToFind)
    {
        return index;
    }
    return firstOccurence(arr + 1, size - 1, index + 1, elementToFind);
}

int main()
{
    cout << endl
         << endl;
    int myarray[] = {0, 7, 1, 9, 2, 4, 2};
    int size = 7;
    int index = 0;
    int elementToSearch = 2;

    cout << "Index of Element is : " << firstOccurence(myarray, size, index, elementToSearch);

    cout << endl
         << endl
         << endl;
    return 0;
}