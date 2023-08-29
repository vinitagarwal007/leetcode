/*
 * @lc app=leetcode id=275 lang=cpp
 *
 * [275] H-Index II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& c) {
        // 3 support variables for us
        int s = 0, e = c.size() - 1, avg;
        // some good old binary search here to find the maximum element meeting the conditions
        while (s <= e) {
            if (c[avg = (e + s) / 2] < c.size() - avg) s = avg + 1;
            else e = avg - 1;
        }
        return c.size() - s;
    }
};
// @lc code=end

