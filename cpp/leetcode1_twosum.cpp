#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++){
            int candidate = nums[i];
            int complement = target - candidate;

            if (seen.count(complement)){
                return {seen[complement], i};
            }

            seen[candidate] = i;
        }

        return {};
    }
};