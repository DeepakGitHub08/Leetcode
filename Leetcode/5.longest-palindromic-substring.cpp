/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
//this solution is w.r.t to geeks for geeks question which had extra constraint.
class Solution {
public:
    string longestPalindrome(string inp) {
         int size = inp.size();
    vector<vector<bool>>pal(size, vector<bool>(size,false));
    pair<int,int>indexMaxLength(0,1);//stores the index and Maxlength repectively  
    for(int i = size - 1;i >= 0; --i){
        for(int j = i;j < size;++j){
            if(i == j){
                pal[i][j] = true;
            }
            else if(j - i == 1){
                pal[i][j] = (inp[i] == inp[j]);
            }
            else{
                pal[i][j] = (inp[i] == inp[j]) && pal[i+1][j-1];

            }
            if(pal[i][j]){
                if(j-i  +1 > indexMaxLength.second){
                    indexMaxLength.second = j-i+1;
                    indexMaxLength.first = i;
                }
                if(j-i+1 == indexMaxLength.second){
                    indexMaxLength.first = min(i,indexMaxLength.first);
                }
            }

        }    
    }
    cout<<indexMaxLength.first<<" "<<indexMaxLength.second<<endl;
    string ans = inp.substr(indexMaxLength.first,indexMaxLength.second);
    return ans;
    }
};
// @lc code=end

