/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        //dp[i] = max sum so far 
        int size =  nums.size();
        vector<int>dp(size,0);
        if(size == 1){
            return nums[0];
        }
        if(size == 2){
            return max(nums[0], nums[1]);
        }
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2;i < size;++i){
            dp[i] = max(dp[i-2]+ nums[i], dp[i-1]);
        }

        return dp[size-1];

    }
};
// @lc code=end

