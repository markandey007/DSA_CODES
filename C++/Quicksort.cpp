/*Quicksort Complexity

Time Complexity	 
Best 	        O(n*log n)
Worst	        O(n2)
Average   	O(n*log n)

Space Complexity	O(log n)
*/


#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //sorting left and right part of the pivot element
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //performing partition 
    int p = partition(arr, s, e);

    //sort the left part 
    quickSort(arr, s, p-1);

    //sort right part 
    quickSort(arr, p+1, e);

}

int main() {

    int arr[5] = {5,4,9,6,2};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
