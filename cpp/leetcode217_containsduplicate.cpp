#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++){
            if (seen.count(nums[i])){
                return true;
            }

            seen[nums[i]] = i;
        }

        return false;
    }
};