/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string t) {
        if(t.length() == 0){
            return 0;
        }
        unordered_map<char, int> map;
        int si = 0;
        int maxLength = 1;
        int currLength = 0;
        for (int p = 0; p < t.length(); ++p)
        {
            if(map.find(t[p]) == map.end()){
                map[t[p]] = p;
                currLength++;
            }
            else{
                if(map[t[p]] < si){
                    map[t[p]] = p;
                    currLength++;
                }
                else{
                    maxLength = max(maxLength, currLength);
                    currLength = currLength - (map[t[p]] - si);				
                    si = map[t[p]] + 1;
                    map[t[p]] = p;
                }
            }
        }
        return max(maxLength, currLength);
        }
};
// @lc code=end

