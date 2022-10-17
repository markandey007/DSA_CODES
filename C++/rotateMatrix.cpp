#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat){
    int n = mat.size();
 
    //Performing Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    }

    //Swapping rows
    for (int i = 0; i < n/2; i++)
        swap(mat[i], mat[n - 1 - i]);
    return;
}

int main() {
    int n;
    cin>>n;

    vector<vector<int>> arr;
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for (int j = 0; j < n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    rotateMatrix(arr);

    //Print rotated matrix
    for (auto t : arr){
        for (auto x : t){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}