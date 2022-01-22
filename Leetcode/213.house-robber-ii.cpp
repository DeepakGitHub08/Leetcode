/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0],nums[1]);
        }
        if(n == 3){
            return max(max(nums[0],nums[1]), nums[2]);
        }
        
        vector<int>dp1(n-1, 0);
        vector<int>dp2(n-1, 0);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0],nums[1]);
        for(int i = 2;i < n-1;++i){
            dp1[i] = max(dp1[i-2]+ nums[i], dp1[i-1]);
        
        }
        dp2[0] = nums[1];
        dp2[1] = max(nums[1],nums[2]);
        for(int i = 2;i < n-1;++i){
            dp2[i] = max(dp2[i-2]+ nums[i+1], dp2[i-1]);
        
        }
        return max(dp1[n-2], dp2[n-2]);
    }
};
// @lc code=end

