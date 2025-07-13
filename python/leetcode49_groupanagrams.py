from typing import List
from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_group = defaultdict(list)

        for s in strs:
            sorted_str = ''.join(sorted(s))
            anagram_group[sorted_str].append(s)

        return list(anagram_group.values())