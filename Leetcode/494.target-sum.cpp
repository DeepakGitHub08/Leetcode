/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int findWays(vector<int>& nums, int curr, int currTarget, map<pair<int,int>, int>&map1){
        if(map1.find({curr, currTarget}) != map1.end() ){
            return map1[{curr, currTarget}];
        }
        if(curr == nums.size() - 1 && nums[curr] == abs(currTarget)){
            if(nums[curr] == 0)return 2;//corner case (imp)
            
            return 1;
        }
        if(curr >= nums.size()){
            return 0;
        }
        map1[{curr, currTarget}] = findWays(nums, curr+1, currTarget + nums[curr], map1)
                                    + findWays(nums, curr+1, currTarget - nums[curr], map1);
        return map1[{curr, currTarget}];
    }   
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>, int>map1;
        return findWays(nums, 0, target, map1);

    }
};
// @lc code=end

