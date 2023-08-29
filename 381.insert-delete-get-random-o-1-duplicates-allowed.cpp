/*
 * @lc app=leetcode id=381 lang=cpp
 *
 * [381] Insert Delete GetRandom O(1) - Duplicates allowed
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class RandomizedCollection {
public:
    vector<int> arr;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool present = (find(arr.begin(),arr.end(),val) != arr.end());
        arr.push_back(val);
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
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

