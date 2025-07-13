#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_group;
        
        for (string s : strs){
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            anagram_group[sorted_str].push_back(s);
        }

        vector<vector<string>> output;
        for (auto& pair : anagram_group){
            output.push_back(pair.second);
        }
        return output;
    }
};