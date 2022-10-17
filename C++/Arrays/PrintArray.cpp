#include <bits/stdc++.h>
using namespace std;

   int threeSumClosest(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        int ans=0,i=0,j=3-1,r=0;
        int sum=0;
        while(r<=j)
        {
           sum+=nums[r];
           cout<<sum<<" ";
            r++;
        }
        while(j<nums.size())
        {   
            ans=min(ans,abs(target-sum));
            sum-=nums[i];
            i++;
            j++;
           sum+=nums[j];
        }
        
        return ans; 
    }


int main(){
    vector<int>nums;
    int n=4;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    threeSumClosest(nums,3);
    return 0;
}