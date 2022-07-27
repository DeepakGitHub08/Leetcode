/*
 * @lc app=leetcode id=1695 lang=cpp
 *
 * [1695] Maximum Erasure Value
 */

// @lc code=start
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> mySet;
        int ans = INT_MIN;
        int sum  = 0;
        int si = 0;
        for(auto i :  nums){
            if(mySet.count(i) > 0){
               cout<<sum<<" ";
                ans = max(ans, sum);
                while(nums[si] != i){
                    sum -= nums[si];
                    cout<<"asd";
                    mySet.erase(nums[si]);
                    si++;
                }
                sum -= i;
                mySet.erase(i);
                si++;
            }
            sum += i;
            mySet.insert(i);
        }
         ans = max(ans, sum);
        return ans;
    }
};
// @lc code=end

