#
# @lc app=leetcode id=295 lang=python3
#
# [295] Find Median from Data Stream
#

# @lc code=start


from heapq import heappop, heappush

class MedianFinder:
    
    def __init__(self):
        self.left = []
        self.right = []
    
    def addNum(self, num: int) -> None:
        if len(self.right) == 0 or num <= self.right[0]:
            heappush(self.left, -num);
        else:
            heappush(self.right, num)
        if len(self.left) < len(self.right):
            heappush(self.left, -heappop(self.right))
        if len(self.left) - len(self.right) == 2:
            heappush(self.right, -heappop(self.left))
        print(self.left, self.right)

    def findMedian(self) -> float:
        if (len(self.right)+ len(self.left))%2 == 1:
            return -self.left[0]
        else:
            return (-self.left[0] + self.right[0])/2


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
# @lc code=end

