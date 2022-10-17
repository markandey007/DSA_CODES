/*
    FIND FIRST OCCURANCE
        APPROACH 1 : LINEAR SERACH
*/
#include <iostream>
using namespace std;
int firstOccurence(int arr[], int size, int index, int elementToSearch)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == elementToSearch)
    {
        return index;
    }
    return firstOccurence(arr, size, ++index, elementToSearch);
}

int main()
{
    cout << endl;
    int myarray[] = {0, 7, 1, 2, 5, 4, 2};
    int size = 7;
    int index = 0;
    int elementToSearch = 2;

    cout << "Index of Element is : " << firstOccurence(myarray, size, index, elementToSearch);

    cout << endl;
    return 0;
}