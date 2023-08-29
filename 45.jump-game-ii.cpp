/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0, end = 0, step = 0, maxend = 0;
        while (end < n - 1)
        {
            step++;
            maxend = end + 1;
            for (int i = start; i <= end; i++)
            {
                if (i + nums[i] >= n - 1)
                    return step;
                maxend = max(maxend, i + nums[i]);
            }
            start = end + 1;
            end = maxend;
        }
        return step;
    }
};
// @lc code=end
