/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int right[size];
        int left[size];
        left[0] = 0;
        right[size-1] = 0;
        int ans = 0;
        for(int i = 1;i < size;++i ){
            left[i] = max(left[i-1], height[i-1]);
        }
        for(int i = size - 2;i >= 0;--i ){
            right[i] = max(right[i+1], height[i+1]);
        }
        
        for(int i = 0;i < size;++i ){
            int t = min(right[i],left[i])- height[i];
            if(t > 0){
                ans += t;
            }
        }
        return ans;
    }
};
// @lc code=end

