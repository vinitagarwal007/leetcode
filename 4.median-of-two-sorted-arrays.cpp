/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<double> vect;
        for (int num : nums1)
        {
            vect.push_back(num);
        }
        for (int num : nums2)
        {
            vect.push_back(num);
        }
        sort(vect.begin(), vect.end());
        double data = 0;
        if (vect.size() % 2 == 0)
        {
            data += vect[vect.size() / 2];
            data += vect[(vect.size() / 2) - 1];
            data = data / 2;
        }
        else
        {
            data = vect[vect.size() / 2];
        }
        return data;
    }
};
// @lc code=end
