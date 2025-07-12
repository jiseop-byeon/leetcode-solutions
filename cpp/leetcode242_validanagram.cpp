#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> freq_s;
        unordered_map<char, int> freq_t;

        for (char c : s){
            freq_s[c]++;
        }
        
        for (char c : t){
            freq_t[c]++;
        }

        return freq_s == freq_t;
    }
};