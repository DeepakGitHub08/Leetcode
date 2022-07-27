#
# @lc app=leetcode id=78 lang=python3
#
# [78] Subsets
#

# @lc code=start
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        self.backTrack(nums, [], res)
        return res
    def backTrack(self, nums, tempList, res):
        res.append(tempList.copy())
        for i in range(len(nums)):
            tempList.append(nums[i])
            self.backTrack(nums[i+1:], tempList, res)
            tempList.pop()
        

# @lc code=end

