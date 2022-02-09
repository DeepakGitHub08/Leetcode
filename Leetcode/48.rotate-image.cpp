/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */
//        //i,j -> j, n-1-i
        //(i,j) , (j,n-1-i), (n-1-i,n-1-j), (n-1-j,i) will swap
        //places in circular order
// @lc code=start
class Solution {
public:
    void rotateUtil(int i, vector<vector<int>>& matrix){
        int n = matrix.size();
        int currSize = n - 2*i;
        if(currSize <= 1){
            return;
        }
        for(int j = i;j < n-i-1;j++){
            int t1 = matrix[i][j];
            int t2 = matrix[j][n-1-i];
            int t3 = matrix[n-1-i][n-1-j];
            int t4 = matrix[n-1-j][i];

            matrix[i][j] = t4;
            matrix[j][n-1-i] = t1; 
            matrix[n-1-i][n-1-j] = t2;
            matrix[n-1-j][i] = t3;
        }
        rotateUtil(i+1,matrix);
    }
    void rotate(vector<vector<int>>& matrix) {
        rotateUtil(0,matrix);
    }
};
// @lc code=end

