/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class RandomizedSet {
public:
    vector<int> arr;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        bool present = (find(arr.begin(),arr.end(),val) != arr.end());
        if(!present) arr.push_back(val);
        return !present;
    }
    
    bool remove(int val) {
        bool present = (find(arr.begin(),arr.end(),val) != arr.end());
        if(present){
            auto index = find(arr.begin(),arr.end(),val);
            arr.erase(index);
        }
        return present;
    }
    
    int getRandom() {
        int range = arr.size();
        int randomIndex = rand() % range;
        return arr[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

