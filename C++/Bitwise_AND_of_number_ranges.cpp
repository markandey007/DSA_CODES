// Leetcode 201. Bitwise AND of Numbers Range
/* Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: left = 5, right = 7
Output: 4
Example 2:

Input: left = 0, right = 0
Output: 0
Example 3:

Input: left = 1, right = 2147483647
Output: 0
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int answer=0;
        for(int bit=30;bit>=0;bit--){
            if((left & (1<<bit))!= (right& (1<<bit))){
                break;
            }
            else{
                answer |=left&(1<<bit);
            }
        }
        return answer;
    }
    
};

int main(){
    int left;
    int right;
    cin>>left>>right;
    Solution s;
    int answer = s.rangeBitwiseAnd(left,right);
    cout<<answer<<endl;
}
