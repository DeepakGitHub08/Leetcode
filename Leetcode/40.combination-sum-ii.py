#
# @lc app=leetcode id=40 lang=python3
#
# [40] Combination Sum II
#

# @lc code=start
class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        candidates.sort()
        self.backTrack(candidates, [],target,res)
        return res
    def backTrack(self, nums, currList, target, res):
        if target < 0:
            return
        if target == 0:
            res.append(currList.copy())
        for i in range(len(nums)):
            if nums[i] > target:
                break;
            if i > 0 and nums[i] == nums[i-1]:#condition to avoid duplicates
                continue;
            self.backTrack(nums[i+1:], currList+[nums[i]], target-nums[i],res)
        
# @lc code=end

