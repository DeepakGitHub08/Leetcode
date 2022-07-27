#
# @lc app=leetcode id=131 lang=python3
#
# [131] Palindrome Partitioning
#

# @lc code=start



class Solution:
    def isPal(self,s):
        return s == s[::-1]
    def partition(self, s: str) -> List[List[str]]:
        n = len(s)
        res = []
        self.backTrack(s, [], res)
        return res
    def backTrack(self, s, currList, res):
        if not s:
            res.append(currList[:])
            return
        for i in range(1,len(s)+1):
            if self.isPal(s[:i]):
                self.backTrack(s[i:],currList + [s[:i]],res )
            


# @lc code=end

