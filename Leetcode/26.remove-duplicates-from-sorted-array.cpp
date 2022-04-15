/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int unique = 0;
        for(int i = 0;i < a.size()-1;i++){
            if(a[i] != a[i+1]){
                a[unique] = a[i];
                unique++;
            }
        }
        if(unique < a.size() -1)
            a[unique]  = a[a.size() -1];
        return unique+1;
    }
};
// @lc code=end

