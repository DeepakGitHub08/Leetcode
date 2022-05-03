/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red, white, blue ;
        red = white = blue = 0;
        for(int i = 0;i < nums.size();i++){
            if (nums[i] == 0)red++;
            else if(nums[i] == 1)white++;
            else blue++;
        }
        int si_red = 0;
        int si_white = red;
        int si_blue = red + white;
        for(int i = 0;i < red;i++){
           nums[i] = 0;
        }
        for(int i = red;i < red + white;i++){
           nums[i] = 1;
        }
        for(int i = red + white;i < nums.size();i++){
           nums[i] = 2;
        }


    }
};
// @lc code=end

