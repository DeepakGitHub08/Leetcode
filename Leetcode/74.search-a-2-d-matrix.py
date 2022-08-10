#
# @lc app=leetcode id=74 lang=python3
#
# [74] Search a 2D Matrix
#

# @lc code=start



class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def BinarySearch():
            left = 0;
            right = len(matrix)-1
            row1 = -1;
            while left < right:
                mid = left + (right-left)//2
                if matrix[mid][0] <= target <= matrix[mid][-1]:
                    row1 = mid
                    break;
                if matrix[mid][0] > target:
                    right = mid
                else:
                    left = mid+1
            if row1 == -1:
                row1 = left
            left = 0;
            right = len(matrix[0])
            while left < right:
                mid = left + (right-left)//2
                if matrix[row1][mid] == target :
                    return True
                if matrix[row1][mid] > target:
                    right = mid
                else:
                    left = mid+1

            return left == target
        if target < matrix[0][0] or target > matrix[-1][-1]:
            return False
        return BinarySearch()
        
# @lc code=end

