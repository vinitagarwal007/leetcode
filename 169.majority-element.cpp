/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int max = 0;
        int num = 0;
        for (auto i : nums)
        {
            map[i]++;
            if (map[i] > max)
            {
                max = map[i];
                num = i;
            }
        }
        return num;
    }
};
// @lc code=end
