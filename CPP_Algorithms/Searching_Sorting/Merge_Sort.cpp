// Merge Sorting Algorithm
// Input is nothing but the Array is given


// First of all we have to divide those arrays into sub lists 
// later we have to merge them with sorting 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int start, int end) {
    //need to create two arrays here because while merging we are always merging two lists with sorting
   
    int mid = (start + end) / 2;
    int len1 = (mid-start) + 1;
    int len2 = (end-mid);

    int *list1 = new int[len1];
    int *list2 = new int[len2];

    //Now inserting elements in the first array 
    int k = start;
    for(int i = 0; i < len1; i++) {
        list1[i] = arr[k++];
    }

    //Now inserting elements in the second array
    k = mid + 1;
      for(int i = 0; i < len2; i++) {
        list2[i] = arr[k++];
    }

    //Now two arrays sorting and merging within orginal array
    int index1 = 0, index2 = 0;
    k = start;
    while(index1 < len1 && index2 < len2) {
        if(list1[index1] < list2[index2]) {
            arr[k++] = list1[index1++];
        }
        else {
            arr[k++] = list2[index2++];
        }

    }

    //if any element remains

    while(index1 < len1) {
        arr[k++] = list1[index1++];
    }

    while(index2 < len2) {
        arr[k++] = list2[index2++];
    }

    //improvement on memory allocations
    delete []list1;
    delete []list2;

}


void MergeSort(int *arr, int start, int end) {
    if(start >= end) {
        return;
    }

    int mid = (start + end)/2;
    //sorting the left part
    MergeSort(arr, start, mid);
    //sorting the right part
    MergeSort(arr, mid+1, end);
    //merging the two parts
    Merge(arr, start, end);

}


int main() {
    int i, j, temp, n;
    cout << "Enter the size of the arrray to sort" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    //Now got the array lets sort it using merge-sort algorithm
    MergeSort(arr, 0, n-1);
    cout << "Printing the Sorted Array" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}