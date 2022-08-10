#
# @lc app=leetcode id=1552 lang=python3
#
# [1552] Magnetic Force Between Two Balls
#

# @lc code=start
class Solution:
    def maxDistance(self, position: List[int], m: int) -> int:
        def check(mid) -> bool:
            prev = position[0]
            currBalls = 1
            for i in range(1, len(position)):
                if position[i] - prev > mid:
                    prev = position[i]
                    currBalls += 1
                if currBalls >= m:
                    return True
            return False

        position.sort()
        right = (position[-1] - position[0])//(m-1)
        left = 1
        while left < right:
            mid = left + (right - left)//2
            if check(mid):
                left = mid+1
            else:
                right = mid
        return left
# @lc code=end

