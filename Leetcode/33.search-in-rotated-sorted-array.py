#
# @lc app=leetcode id=33 lang=python3
#
# [33] Search in Rotated Sorted Array
#

# @lc code=start
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums) -1;
        pivot = n;
        left = 0;
        right = n
        while left < right:
            mid = left + (right-left)//2
            if nums[mid] > nums[mid+1]:
                pivot = mid
                break
            if nums[left] < nums[mid]:
                left = mid +1
            else:
                right = mid

        if target <= nums[pivot] and target >= nums[0]:
            left = 0;
            right = pivot;
        elif target <= nums[n] and target >= nums[min(pivot+1,n)]:
            left = pivot+1;
            right = n;
        else:
            return -1
        while left < right:
            mid = left + (right-left)//2
            if nums[mid] < target:
                left = mid+1
            else:
                right= mid
        if nums[left] == target:
            return left
        else:
            return -1       

        
# @lc code=end

