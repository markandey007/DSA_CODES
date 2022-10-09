#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersect3arr(vector<int> arr1, vector<int> arr2, vector<int> arr3) {
    vector<int> ans;
    int i = 0, j = 0 , k = 0;
    while(i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            i++ ; j++ ; k++;
        }
        else if(arr1[i] <= arr2[j] && arr1[i] <= arr3[k]) {
            i++;
        }
        else if(arr2[j] <= arr1[i] && arr2[j] <= arr3[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    //print the ans;
    for(auto i: ans) {
        cout << i << " ";
    }
    cout << endl;

}

int main() {
    vector<int> arr1, arr2, arr3;
    int n1, n2, n3;
    cout << "Enter the size of arrays";
    cin >> n1 >> n2 >> n3;
    for(int i = 0; i < n1; i++) {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }
    for(int i = 0; i < n2; i++) {
        int temp;
        cin >> temp;
        arr2.push_back(temp);
    }
    for(int i = 0; i < n3; i++) {
        int temp;
        cin >> temp;
        arr3.push_back(temp);
    }
    intersect3arr(arr1, arr2, arr3);
    return 0;
}