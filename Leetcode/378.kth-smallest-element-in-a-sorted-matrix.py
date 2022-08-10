#
# @lc app=leetcode id=378 lang=python3
#
# [378] Kth Smallest Element in a Sorted Matrix
#

# @lc code=start
from heapq import heappop, heappush


class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        maxHeap = [];
        n = len(matrix)
        for i in range(n):
            for j in range(n):
                heappush(maxHeap, -matrix[i][j])
                if len(maxHeap) > k:
                    heappop(maxHeap)
        return -heappop(maxHeap)
        
# @lc code=end

