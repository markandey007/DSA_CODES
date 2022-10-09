// Algorithm for Quick Sort Problem

// partitioning and pivot concept is basically used here.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    //now place the pivot at its right position where left elements are smaller and right 
    // elements are greater than the pivot.
    int cnt = 0;
    for(int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }
    int place = start + cnt;
    swap(arr[place], arr[start]);
    
    int i = start, j = end;

    while(i < place && j > place) {

        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < place && j > place) {
            swap(arr[i++], arr[j--]);
        }
    }

    return place;
}


void quickSort(int arr[], int start, int end) {
    if(start >= end)
        return;

    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p+1, end);

}



int main() {
    int n, temp;;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }
    //Now we got the array.
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;

}