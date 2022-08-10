#
# @lc app=leetcode id=823 lang=python3
#
# [823] Binary Trees With Factors
#

# @lc code=start
class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        arr.sort()
        myDict = {arr[i] : i for i  in range(len(arr))}
        print(arr)
        dp = [1 for i in range(len(arr))]
        for i in range(len(arr)):
            for j in range(i):
                if arr[i] % arr[j] == 0 and arr[i]//arr[j] in myDict  :
                    dp[i] += dp[myDict[arr[i]/arr[j]]] * dp[j]
        print(dp)
        return sum(dp) % (pow(10,9) + 7)
        

        
# @lc code=end

