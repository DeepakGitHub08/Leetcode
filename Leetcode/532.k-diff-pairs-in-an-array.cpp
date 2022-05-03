/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map <pair<int,int>,bool> pairExists;
        unordered_map<int, int>myMap;
        for(int i = 0;i < nums.size();i++){
            if(myMap.find(nums[i] - k) != myMap.end()){
                if(pairExists.find({nums[i], nums[i] - k }) == pairExists.end()){
                    pairExists[{nums[i], nums[i] - k}] = true;
                }
            }
            if(myMap.find(nums[i] + k) != myMap.end()){
                if(pairExists.find({nums[i], nums[i] + k }) == pairExists.end()){
                    pairExists[{ nums[i] + k,nums[i]}] = true;
                }
            }
            myMap[nums[i]] = i;
        }

        return pairExists.size();
    }
};
// @lc code=end

