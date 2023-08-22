/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0,min = INT32_MAX;
        for(auto price : prices){
            if(price < min){
                min = price;
            }
            if(price-min > max){
                max = price-min;
            }
        }
        return max;
    }
};
// @lc code=end
