/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root->val == p->val || root->val == q->val)
        {
            return root;
        }
        TreeNode*  left = lowestCommonAncestor(root->left, p, q);
        TreeNode*  right = lowestCommonAncestor(root->right, p, q);
          
        if(!left)
            return right;
        else if (!right)
        {
            return left;
        }
        return root;
        
        
    }
};
// @lc code=end

