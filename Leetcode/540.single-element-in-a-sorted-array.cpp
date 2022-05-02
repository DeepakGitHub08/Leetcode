/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
// //EXPLANATION:-
// Suppose array is [1, 1, 2, 2, 3, 3, 4, 5, 5]
// we can observe that for each pair, 
// first element takes even position and second element takes odd position
// for example, 1 is appeared as a pair,
// so it takes 0 and 1 positions. similarly for all the pairs also.

//this pattern will be missed when single element is appeared in the array.

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int right  = nums.size() -1;
        int left = 0;
        while(left < right ){
            
            int mid = (left + right )/2;
            std::cout<<left <<" "<< right<<" "<<mid<<endl;
            if( (mid % 2 == 0 && nums[mid] == nums[mid +1]) || (mid %2 == 1 && nums[mid] == nums[mid - 1]) )
                left = mid + 1;
            else
                right = mid;
        }
           
        return nums[left];
        
    }
};
// @lc code=end

