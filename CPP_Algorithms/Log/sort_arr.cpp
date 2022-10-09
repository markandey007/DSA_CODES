// Problem Statement
/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        int i, j, temp;
        //First of all lets do the square of them
        for(i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }
        i = 0;
        j = nums.size() - 1;
        for(temp = nums.size() - 1; temp >= 0; temp--) {
            if(nums[i] < nums[j]) {
                arr[temp] = nums[j];
                j--;
            } else {
                arr[temp] = nums[i];
                i++;
            }
                
        }
        return arr;
    }
};

