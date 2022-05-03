/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    
    static bool IsPermutation(string b, vector<int>m2){
        int m1[128] = {0};
        for(int i = 0;i < b.size();i++ ){
            m1[int(b[i])]++;
        }
        for(int i = 0;i < 128;i++){
            if(m1[i] != m2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>m2 = vector<int>(128,0);
        for(int i = 0;i < s1.size();i++){
            m2[int(s1[i])]++;
        }
        for(int i = 0;i < s2.size() - s1.size();i++){
            if (m2[int(s2[i])] > 0){
                string t = s2.substr(i, s1.size());
                if(IsPermutation(t, m2))
                    return true;
                i = i+ s1.size();     
            }
        }

        return false;
        //* another approach *//
        // int lenS1 = s1.size(), lenS2 = s2.size();
        // if (lenS1 > lenS2) return false;

        // vector<int> countS1(26, 0), countS2(26, 0);
        // for (int i = 0; i < lenS1; ++i) {
        //     countS1[s1[i] - 'a']++;
        //     countS2[s2[i] - 'a']++;
        // }
        // if (countS1 == countS2) return true;
        // for (int i = lenS1; i < lenS2; ++i) {
        //     countS2[s2[i] - 'a']++;
        //     countS2[s2[i - lenS1] - 'a']--;
        //     if (countS1 == countS2) return true;
        // }
        // return false;
    }
};
// @lc code=end

