/*
 * @lc app=leetcode id=474 lang=cpp
 *
 * [474] Ones and Zeroes
 */

// @lc code=start
class Solution {
public:

    
    int findMaxForm(vector<string>& strs, int m, int n) {
        int size = strs.size();
        vector<pair<int, int>>ValuesCount;
        for(int i = 0;i < size; i++){
            int count0 = 0;
            int count1 = 0;
            string t = strs[i];
            
            for(int j = 0;j < t.length();j++){
                if(t[j] == '0'){
                    count0++;
                }
                else count1 ++;
            }
            
            ValuesCount.push_back({count0, count1});
        }
    
        int dp[m+1][n+1];
        memset(dp, 0, sizeof dp);
        for(int i = 1;i < size+1; i++){
            int zeros = ValuesCount[i-1].first;
            int ones = ValuesCount[i-1].second;
            cout<<zeros<<" "<<ones<<endl;        
            for(int j = 0;j < m+1;j++){

                for(int k = 0;k < n+1;k++){
                    
                    if (zeros <= j && ones <= k){
                        
                        dp[i][j][k] = max(dp[i-1][j][k], 1 + dp[i-1][j - zeros][k - ones]);
                    }
                    else{
                        dp[i][j][k] = dp[i-1][j][k];
                    }
                }
            }
        }
        
        return dp[size][m][n];    
    }
};
// @lc code=end

