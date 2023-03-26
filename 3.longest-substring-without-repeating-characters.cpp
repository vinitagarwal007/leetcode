/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> vect(256, -1);
        int maxlen = 0, last = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (vect[s[i]] > last)
            {
                last = vect[s[i]];
            }
            vect[s[i]] = i;
            maxlen = max(maxlen, i - last);
        }
        return maxlen;
    }
};
// @lc code=end
