#
# @lc app=leetcode id=90 lang=python3
#
# [90] Subsets II
#

# @lc code=start



class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        self.backTrack(nums,[],res)
        return res

    def backTrack(self, nums, tempList, res):
        res.append(tempList.copy())#copy is important as it just assign the reference to the tempList
        print(nums)
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue;
            tempList.append(nums[i])
            self.backTrack(nums[i+1:], tempList, res)
            tempList.pop()
# @lc code=end

