#include <string>
#include <stdio.h>

class Solution {
public:
    // O_time (N). O_space(1)
    std::string reverseWords(std::string s) {
        int len = s.length();
        int i = 0;

        while (i < len) {
            int start = i;
            
            // sub-str length
            while (i < len && s[i] != ' ') {
                i++;
            }

            int left = start, right = i - 1;
            while (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
            while (i < len && s[i] == ' ') i++;
        }

        return s;
    }
};


int main() {

    Solution s;

    s.reverseWords("std::string s SolutionAAAAA");
    printf("%s \n", s);

    return 0;
}


