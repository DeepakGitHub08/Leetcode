/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>map;
        vector<int>ans(2,0);
        for(int i = 0;i < nums.size();i++){
            if(map.find(target - nums[i]) != map.end()){
                
                ans[1]=i;
                ans[0]= map[target-nums[i]];
            }
            else{
                
                map[nums[i]] = i;
                cout<<i<<" "<<map[nums[i]]<<" "<<nums[i]<<endl;
            }
        }
        return ans;
    }
};
// @lc code=end
