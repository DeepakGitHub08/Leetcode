#
# @lc app=leetcode id=540 lang=python3
#
# [540] Single Element in a Sorted Array
#

# @lc code=start
class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        left = 0
        right = len(nums)-1
        while left < right:
            mid  = left + (right - left)//2
            x1 = nums[mid] == nums[mid+1]
            x2 =  nums[mid] == nums[mid-1]
            if mid > 0:
                if not x1 and not x2 :
                    return nums[mid] 
            else:
                if not x1:
                    return nums[mid]
            print(left, mid, right)
            if nums[mid] != nums[mid+1]:
                if (right-mid)%2 == 0:
                    right = mid
                else:
                    left = mid + 1
            else:
                if (right-mid)%2 == 0:
                    left = mid + 1
                else:
                    right = mid
            print("lastline ", left, mid, right)
        return nums[left]
# @lc code=end

