// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem581.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = -1, end = -1;
        int max_so_far = INT_MIN;
        for(int i = 0;i < nums.size();i++){
            if( max_so_far > nums[i]){
                if(start == -1)start = i-1;
                while(start - 1 >= 0 && nums[start-1] > nums[i])start--;
                end = i+1;
            }
            else {
                max_so_far = nums[i];
            }
        }
        return end
    }
};
// @lc code=end

