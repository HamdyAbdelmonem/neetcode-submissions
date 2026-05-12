#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> set ={};
        for (int x: nums){
            if (set.count(x)==0)
            set.insert(x);

            else
            return true;
        }

        return false;
    }
};