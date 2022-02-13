/*
 * @lc app=leetcode id=775 lang=cpp
 *If A[i] > i + 1, means at least one number that is smaller than A[i] is kicked out from first A[i] numbers, and the distance between this smaller number and A[i] is at least 2, then it is a non-local global inversion.
 * [775] Global and Local Inversions
 */

// @lc code=start
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for (int i = 0;i < nums.size();i++){
            if(abs(nums[i] - i) > 1)
                return false;
        }
        return true;
    }
};
// @lc code=end

