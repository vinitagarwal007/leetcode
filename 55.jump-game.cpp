/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int i = 0;
        for (int reach = 0; i < nums.size() && i <= reach; ++i)
            reach = max(i + nums[i], reach);
        return i == nums.size();
    }
};
// @lc code=end
