/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_map<int,int> map;
       int j = 1;
       for (int i = 1; i < nums.size(); i++)
       {
        cout <<nums[i] << ":"<< nums[i-1];
        if(nums[i] == nums[i-1]){
            map[nums[i]]++;
            if(map[nums[i]] <= 1){
                cout << "check";
                nums[j] = nums[i];
                j++;
            }
        }else{
            nums[j++] = nums[i];
        }
        cout <<endl;
       }
       return j;
    }
};
// @lc code=end

