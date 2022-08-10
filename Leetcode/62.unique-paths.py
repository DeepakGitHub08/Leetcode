#
# @lc app=leetcode id=62 lang=python3
#
# [62] Unique Paths
#

# @lc code=start
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [[0 for i in range(n)] for j in range(m)]
        dp[m-1][n-1] = 1
        for i in range(m-1):
            dp[i][n-1] = 1
        for i in range(n-1):
            dp[m-1][i] = 1
        for i in range(m-2, -1, -1):
            for j in range(n-2, -1, -1):
                dp[i][j] = dp[i+1][j] + dp[i][j+1]
        return dp[0][0]
# @lc code=end

