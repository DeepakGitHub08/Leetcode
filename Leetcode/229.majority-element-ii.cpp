/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;int count2 = 0;
        if(nums.size() == 1){
            return nums;
        }
        int nums1;
        int nums2;
        for(int i = 0;i< nums.size();i++){
            if(count1 == 0 && nums[i] != nums2){
                nums1 = nums[i];
            }
            if(count2 == 0 && nums[i] != nums1){
                nums2 = nums[i];
            }
            if(nums[i] == nums1){
                count1++;
            }
            else if (nums[i] == nums2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }

        }
        count1 = 0;count2 = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == nums1){
                count1++;
            }
            if(nums[i] == nums2){
                count2++;
            }
        }
        vector<int>ans;
        if(count1 > nums.size()/3)
            ans.push_back(nums1);
        if(count2 > nums.size()/3)
            ans.push_back(nums2);

        return ans;
    }
};

//[3,2,3,1,2,3,2,2,1,2,1,3]
// @lc code=end

