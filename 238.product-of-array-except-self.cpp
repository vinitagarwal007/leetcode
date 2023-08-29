/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(1);
        }
        int curr = 1;
        for (int i = 0; i < n; i++)
        {
            arr[i] *= curr;
            curr *= nums[i];
        }
        curr = 1;
        for (int i = n-1; i >= 0; i--)
        {
            arr[i] *= curr;
            curr *= nums[i];
        }
        return arr;

    }
};
// @lc code=end

