/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>ans;
        for(int i = 0;i < ops.size();i++){
            int size = ans.size();
            if(ops[i] == "+"){
                
                ans.push_back(ans[size-1] + ans[size-2]);
            }
            else if(ops[i] == "D"){
                ans.push_back(2*ans[size-1]);

            }
            else if (ops[i] == "C"){
                ans.erase(ans.begin() + size-1);
            }
            else{
                ans.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for (int i = 0;i < ans.size();i++){
            sum += ans[i];
        }
        return sum;
    }
};
// @lc code=end

