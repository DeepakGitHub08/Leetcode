/*
 * @lc app=leetcode id=946 lang=cpp
 *
 * [946] Validate Stack Sequences
 */

// @lc code=start
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int curr = 0;
        stack<int> s;
        for(int i = 0;i < pushed.size();i++){
            s.push(pushed[i]);
            while( !s.empty() && s.top() == popped[curr]  && curr < popped.size()){
                s.pop();
                curr++;
            }
        }
        return s.empty();
    }
};
// @lc code=end

