

/*

Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/


class Solution {
public:
    
    // This can be better solved using reverse in O(1) space complexity
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size()-1);
        for(int i = 0; i < nums.size()-1; i++) {
            cout << nums[i] << " ";
        }
        reverse(nums, 0, k-1);
        reverse(nums, k,nums.size() - 1);
        
    }
    
    void reverse(vector<int>& arr, int start, int end) {
        while(start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
            
    }
    
    
};