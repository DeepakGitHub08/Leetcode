/*
 * @lc app=leetcode id=538 lang=cpp
 *
 * [538] Convert BST to Greater Tree
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

//using inorder to store the array in increasing order
// storing corresponding 
    void inorder(TreeNode* node, unordered_map<int ,TreeNode* >&myMap, vector<int> &array){
        
        if(!node){
            return ;
        }
        inorder(node->left, myMap,array);
        array.push_back(node->val);
        myMap[node->val] = node;
        inorder(node->right, myMap, array); 
    }

    TreeNode* convertBST(TreeNode* root) {
        unordered_map<int, TreeNode*>myMap;
        vector<int> array;
        inorder(root, myMap, array);
        for(int i = array.size()-2;i>=0;i--){
            TreeNode *node = myMap[array[i]];
            array[i] += array[i+1];
            node->val = array[i];
        }
        return root;
    }
};
// @lc code=end

