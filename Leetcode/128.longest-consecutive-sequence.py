#
# @lc app=leetcode id=128 lang=python3
#
# [128] Longest Consecutive Sequence
#

# @lc code=start



from pip import List


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        dict = {}
        ans = 0
        for i in range(len(nums)):
            dict[nums[i]] = i
        for i in nums:
            if i-1 in dict.keys():
                pass;
            else:
                temp = 1;
                while i+1 in dict.keys():
                    i = i+1
                    temp = temp + 1
                ans = max(ans,temp)
        
        return ans;
        
# @lc code=end

