/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = prices[0];
        int ans  = 0;
        for(int i  = 1;i < prices.size();i++){
            if(prices[i] < cp){
                cp = prices[i];
            }
            else{
                ans = max(ans, prices[i] - cp);
            }
        }
        return ans;
    }
};
// @lc code=end

