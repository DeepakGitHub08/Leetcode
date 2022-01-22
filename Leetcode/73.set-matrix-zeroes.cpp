/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int first_row_value = 0;
        for(int j = 0;j < n;j++){
            if(matrix[0][j] == 0){
                first_row_value = 1;
            }
        }
        for(int i = 1;i < m ;i++){
            int row_value = 0;
            for(int j = 0;j < n;++j){
                if(matrix[i][j] == 0){
                    row_value = 1;
                    matrix[0][j] = 0;
                    for(int k = j;k >= 0;k--){
                        matrix[i][k] =0;
                    }    
                    for(int k = i;k > 0;k--){
                        matrix[k][j] =0;
                    }
                    
                }
                else{
                    if(matrix[0][j] == 0 || row_value){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if(first_row_value){
            for(int j = 0;j < n;j++){
                matrix[0][j] = 0;
            }
        }
    }
    
};
// @lc code=end

