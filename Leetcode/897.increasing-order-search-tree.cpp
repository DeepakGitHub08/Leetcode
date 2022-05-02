/*
 * @lc app=leetcode id=897 lang=cpp
 *
 * [897] Increasing Order Search Tree
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
class Solution {
public:

//using inorder to store the values in array 
// then creating nodes for those
    void inorder(TreeNode* node, vector<int>&array){
        if(!node){
            return; 
        }
        inorder(node->left, array);
        array.push_back(node->val);
        inorder(node->right, array);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>array;
        inorder(root,array);
        TreeNode* newRoot = new TreeNode(array[0]);
        TreeNode* temp = newRoot;;
        for(int i = 1;i < array.size();i++){
            TreeNode* node = new TreeNode(array[i]);
            temp->right = node;
            temp = node;
        }
        return newRoot;
    }
};
// @lc code=end

