#include <bits/stdc++.h>
using namespace std;
int maximumUniqueSubarray(vector<int> arr) 
{
        int x = max_element(arr.begin(),arr.end()) - arr.begin();
        int mx = arr[x];
        int a[mx + 1];                    //Creating a hashtable using the array
        memset(a,0,sizeof(a));
        int prev = 0, sum = 0, ans = 0;      //Using prev to store the index of the last deleted element
                                             //Sum to calculate the running sum, ans to store the sum of maximum unique subarray
        for(int i = 0; i < arr.size(); i++)
        {
             int x = arr[i];                //Storing the current element in the vector arr
             if(a[x] != 0)                   //If the hash value is not 0 for the element, that means it has occurred before 
             {                               //Decreasing the available window
                 int  t = a[x];              //Store the previous index of this element
                 while(prev < t)             //Subtract (from the sum) all the elements occurring in the vector from [prev, t), notice the brackets, indicating that element at prev is inclusive, but not the one at t
                     sum -= arr[prev++];     //The value of sum decreases
             }
            a[x] = i+1;                       //Storing the occuring index of the current element
            sum += x;                         //Aadding the value to the sum
            ans = max(ans,sum);               //Storing the max sum in the answer variable
        }
        return ans;
}
int main() 
{
    vector<int> v = {1, 2, 3, 1, 5};
    cout << maximumUniqueSubarray(v);
    return 0;
}
