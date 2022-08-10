#
# @lc app=leetcode id=347 lang=python3
#
# [347] Top K Frequent Elements
#

# @lc code=start
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        C = Counter(nums);
        ans = []
        print(C)
        for i in sorted(C,key = C.get,reverse=True):
            print(i);
            if len(ans) == k:
                break
            ans.append(i)
        return ans
        
# @lc code=end

