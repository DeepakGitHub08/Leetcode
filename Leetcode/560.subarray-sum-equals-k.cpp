// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem560.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int sum=0, count=0, i=0, j=0;
        unordered_map<int, int>s;
        
        for(i=0; i<n; i++){
            sum += nums[i];
            if(sum==k)
                count++;
            if(s.find(sum-k)!=s.end())
                count+=s[sum-k];
            s[sum]++;
        } 
        
        return count;
    }
};
// @lc code=end

