/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];
        int profit =0 ;
        for (int i = 0; i < prices.size(); i++)
        {
           if(prices[i] < max){
            profit += max - min;
            min = prices[i];
            max = prices[i];
           }
           if(prices[i] > max){
            max = prices[i];
           }
        }
        if(min < max){
            profit += max - min;
        }
        return profit;
    }
};
// @lc code=end

