/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <iostream> //importing the standard library
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
// @lc code=end

