/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       //approach : Since we were given space at the end of first array, if we merge from last instead of first, then we will not have conflicts.
        // To make even faster, we can stop once second array is finished as the remaining elements are already present in the first array. 
        int i = m-1, j = n-1, currLast = m+n-1;
        while(j>=0){
            if(i < 0 || nums1[i] <= nums2[j]){
                nums1[currLast] = nums2[j];
                j--;
            }
            else{
                nums1[currLast] = nums1[i];
                i--;
            }

            currLast--;
        }
    }
};
// @lc code=end

