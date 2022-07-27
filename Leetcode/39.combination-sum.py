#
# @lc app=leetcode id=39 lang=python3
#
# [39] Combination Sum
#

# @lc code=start
class Solution:
    target = 0
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        self.target = target
        res = []
        candidates.sort()
        self.backTrack(candidates,0,[],res)
        return res
    def backTrack(self, nums, currSum, currList, res):
        if currSum == self.target:
            res.append(currList)
            return
        for i in range(len(nums)):
            if currSum + nums[i] > self.target:
                return;
            self.backTrack(nums[i:],currSum + nums[i], currList+[nums[i]],res )
# @lc code=end

