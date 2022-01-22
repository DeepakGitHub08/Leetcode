/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = nums.size()-1;
        for(int i = nums.size()-2;i >= 0;i--){
            if (nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == nums.size() -1){
            sort(nums.begin(), nums.end());
            return;
        }
        for (int j = nums.size()-1 ;j >=0;j--){
            if (nums[j]  > nums[pivot]){
                swap(nums[pivot] , nums[j]);
                break;
            }
                    
        }
        reverse(nums.begin()+ pivot+1, nums.end());
                 
        
    }
};
// @lc code=end

