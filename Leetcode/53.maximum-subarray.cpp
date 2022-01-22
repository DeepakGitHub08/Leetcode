/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>dp(nums.size());
        dp[0] = max(0, nums[0]);
        for(int i = 1;i < nums.size();i++){
            dp[i] = max(0, dp[i-1] + nums[i]);
        }
        int ans =  *max_element(dp.begin(), dp.end());
        if(ans == 0){
            return *max_element(nums.begin(), nums.end());
        }
        else return ans;
    }
};
// @lc code=end

