#
# @lc app=leetcode id=114 lang=python3
#
# [114] Flatten Binary Tree to Linked List
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        preOrderList = []
        if not root:
            return root
        def preOrder(node, preOrderList):
            if not node:
                return
            preOrderList.append(node)
            preOrder(node.left, preOrderList)
            preOrder(node.right, preOrderList)
        
        preOrder(root, preOrderList)
        # print(preOrderList)
        for i in range(len(preOrderList) - 1):
            preOrderList[i].right = preOrderList[i+1]
            preOrderList[i].left = None
            
        return preOrderList[0]

        
# @lc code=end

