#include<bits/stdc++.h>
using namespace std;
void printmerge(int arr1[], int arr2[], int n1, int n2){
      int i=0,j=0;
       while(i<n1 && j<n2){
     if(arr1[i]<arr2[j]){
        cout<<arr1[i]<<" ";
            i++;
     }
     else if (arr1[i]>arr2[j]){
                cout<<arr2[j]<<" ";
                j++;
     }
     else{
         cout<<arr1[i]<<" ";
         i++;
          j++;
     }
    }
    while(i<n1){
            cout<<arr1[i]<<" ";
                i++;
              
        }
        while(j<n2){
            cout<<arr2[j]<<" ";
                j++;
        }
}  
void printsame(int arr1[], int arr2[], int n1, int n2){
    for(int i=0;i<n1; i++){
        for (int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}
    void intersection(int nums1[], int nums2[], int n, int m) {
        sort(nums1, nums1+n);
        sort(nums2, nums2+m);
        set<int> s;
        vector<int > v;
        int i=0;
        int j=0;
        //int n=nums1.size();
        //int m=nums2.size();
        while(i<n && j<m){
            if (nums1[i]==nums2[j]){
                s.insert(nums1[i]);
                //cout<<nums1[i];
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else
                j++;
        }
        for(auto i:s){
           v.push_back(i);
        }
        //v.push_back(1);
        for (int i=0; i<v.size();i++){
            cout<<v[i];
        }
        
    }
int main(){
    int arr1[3] = {4,9,5};
    int arr2[5] = {9,4,9,8,4};
    int n1=3;
    int  n2=5;
    intersection( arr1,  arr2,  n1,  n2);
    //cout<<"union->";
    //printmerge(arr1, arr2, n1, n2);
    //cout<<endl<<"intersection->";
    //printsame(arr1, arr2, n1, n2);
    return 0;
}