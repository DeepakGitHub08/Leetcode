/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// 1. at any level we would have the nodes at that height
// 2. push them to list 
// 3. push their decendant to queue.
class Solution {
public:
   vector<vector<int>> levelOrder(TreeNode *root) {
      vector<vector<int>> result;
      if (!root) return result;

      queue<TreeNode *> q;
      q.push(root);
      while (!q.empty()) {
          int n = q.size();
          vector<int> crtLevel;
          for (int i = 0; i < n; i++) {
              TreeNode *p = q.front();
              q.pop();
              crtLevel.push_back(p->val);
              if (p->left) q.push(p->left);
              if (p->right) q.push(p->right);
          }
          result.push_back(crtLevel);
      }
      return result;
  } 
};
// @lc code=end

