/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), sortcol);
        int currHighest = intervals[0][1];
        int currLowerBound = intervals[0][0];
        for (int i = 1;i < intervals.size();i++){
            if(intervals[i][0] <= currHighest ){
                currHighest = max(intervals[i][1], currHighest);
            }
            else{
                vector<int>temp{currLowerBound, currHighest};
                ans.push_back(temp);
                currLowerBound = intervals[i][0];
                currHighest = intervals[i][1];
            }
        }
        vector<int>temp{currLowerBound, currHighest};
        ans.push_back(temp);
        return ans;

    }
};
// @lc code=end

