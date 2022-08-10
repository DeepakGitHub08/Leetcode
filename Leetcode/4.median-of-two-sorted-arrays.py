#
# @lc app=leetcode id=4 lang=python3
#
# [4] Median of Two Sorted Arrays
#

# @lc code=start
import math
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        k1 = 0
        k2 = -1
        n = len(nums1)
        m = len(nums2)
        k1 = (m+n+1)//2
        if (n + m)%2 == 0:    
            k2 = k1 + 1
        print(k1)
        def check(arr1, arr2):
            count1 = 0
            if len(arr1) > len(arr2):
                return check(arr2, arr1)
            n = len(arr1)
            m = len(arr2)
            low = max(0, k1-m) 
            high = min(n,k1)
            while low<= high:
                c1 = (high + low)//2
                c2 = k1 - c1
                l1 =  -math.inf if c1==0 else arr1[c1-1]
                l2 =  -math.inf if c2 ==0 else arr2[c2-1]
                r1 = math.inf if c1 == n else arr1[c1]
                r2 = math.inf if c2 == m else arr2[c2]
                
                if l1 <= r2 and l2 <= r1:
                    if k2 != -1:
                        return max(l1,l2)/2 + min(r1,r2)/2
                    return max(l1, l2)
                if l2 > r1:
                    low = c1 + 1
                else:
                    high = c1 - 1
            return 1
        return check(nums1, nums2)
# @lc code=end

