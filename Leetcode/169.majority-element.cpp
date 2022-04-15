/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxCount = 0;
        int majorityElement = nums[0];
        for(int i = 0;i < nums.size();i++){
             if(maxCount == 0){
                majorityElement = nums[i];
            }
            if(nums[i] == majorityElement){
                maxCount++;
            }
            else{
                maxCount--;
            }
           
        }
        return majorityElement;
    }
};
// @lc code=end

