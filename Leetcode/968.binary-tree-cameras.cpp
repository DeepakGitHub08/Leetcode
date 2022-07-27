/*
 * @lc app=leetcode id=968 lang=cpp
 *
 * [968] Binary Tree Cameras
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
int t = 0;
class Solution {
public:

    int helper(TreeNode* node){
        if(!node)return 2;
        int right = helper(node->right), left = helper(node->left);
        if(right == 0 || left ==0){
            t++;
            return 1;
        }
        return left == 1 || right == 1 ? 2:0;
    }
    int minCameraCover(TreeNode* node) {
        return (dfs < 1 ? 1 :0 ) + t;
        
    }
};
// @lc code=end

