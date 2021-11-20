#include <string>
#include <unordered_map>

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<int, int> frequency;
        for (char ch: s) {
            ++frequency[ch];
        }
        for (int i = 0; i < s.size(); ++i) {
            if (frequency[s[i]] == 1) return i;
        }

        return -1;
    }
};