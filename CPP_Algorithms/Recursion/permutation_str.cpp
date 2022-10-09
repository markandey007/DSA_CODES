//Program to find out the permutations of a string using recursion

class Solution {
    
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        //for loop for swapping others
        for(int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(nums, ans, index+1);
            //backtrack
            swap(nums[index], nums[i]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};