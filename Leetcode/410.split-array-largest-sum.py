#
# @lc app=leetcode id=410 lang=python3
#
# [410] Split Array Largest Sum
#

# @lc code=st art
import math


class Solution:
    def splitArray(self, nums: List[int], m: int) -> int:
        def CanSplit(mid) -> bool:
            currSum = 0
            totalGroups = 1
            for num in nums:
                currSum += num
                if currSum > mid:
                    currSum = num
                    totalGroups +=1
                if totalGroups > m:
                    return False
            return True
        
        minValue = 0
        maxValue = 0
        for num in nums:
            minValue = max(minValue, num)
            maxValue += num
        
        while minValue < maxValue:
            mid = minValue + (maxValue - minValue)//2
            if CanSplit(mid):
                maxValue = mid
            else:
                minValue = mid + 1
        return minValue


# @lc code=end

