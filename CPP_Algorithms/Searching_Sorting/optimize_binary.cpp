//Code to perform Binary search in the array

//Optimized version for the Binary Search algorithm

// mid = start + (end - start)/2;
// this will prevent from integer overflow cases 
 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int BinarySearch(vector<int> arr, int temp) {
    int mid, start, end;
    start = 0; end = arr.size()-1;
    mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == temp) {
            return mid;
        }

        if(arr[mid] < temp) {
            start = mid + 1;
        }

        if(arr[mid] > temp) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main() {
    int size, i, j, temp, ele, res;
    vector<int> arr;
    cout << "Enter the length of the array" << endl;
    cin >> size;
    for(i = 0; i < size; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter the element to search within the array" << endl;
    //Now got the array 
    cin >> temp;


    res = BinarySearch(arr, temp);
    cout << "The element is at index: " << res << endl;
    return 0;

}