#
# @lc app=leetcode id=46 lang=python3
#
# [46] Permutations
#

# @lc code=start
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        vis = {num : 0 for num in nums}
        res = []
        currPath = []
        def backTrack(currPath, res, vis):
            if len(currPath) == len(nums):
                res.append(currPath[:])
                return
            for num in nums:
                if vis[num]:
                    continue
                vis[num] = 1
                backTrack(currPath + [num], res, vis)
                vis[num] = 0
        backTrack(currPath, res, vis)
        return res
        
# @lc code=end

