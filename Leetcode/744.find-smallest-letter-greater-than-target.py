#
# @lc app=leetcode id=744 lang=python3
#
# [744] Find Smallest Letter Greater Than Target
#

# @lc code=start
class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        left = 0
        right = len(letters)
        while left < right:
            mid = left +(right-left)//2
            if ord(letters[mid]) > ord(target):
                right = mid
            else:
                left = mid + 1
        return letters[mid]
# @lc code=end

