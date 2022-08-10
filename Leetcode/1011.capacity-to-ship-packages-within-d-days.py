#
# @lc app=leetcode id=1011 lang=python3
#
# [1011] Capacity To Ship Packages Within D Days
#

# @lc code=start
class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        def check(mid):
            totalDays = 1
            sum = 0
            for num in weights:
                sum += num
                if sum > mid:
                    totalDays += 1
                    sum  = num
                if totalDays > days:
                    return False
            return True
        
        right = sum(weights)
        left = max(weights)
        while left < right:
            mid  = left + (right -left)//2
            if check(mid):
                right = mid
            else:
                left = mid + 1
        return left
# @lc code=end

