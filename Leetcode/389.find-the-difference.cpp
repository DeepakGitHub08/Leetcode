/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int p[26] = {0};
        int p2[26] = {0};
        for(int i = 0;i < s.size(); i++){
            p[97 - s[i]]++;
        }
        for(int i = 0;i < t.size(); i++){
            p2[97 - t[i]]++;
        }

        for(int i = 0;i < 26;i++){
            if(p2[i] > p[i]){
                return char(i+ 97);
            }
        }
        
    }
};
// @lc code=end

