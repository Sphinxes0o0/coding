#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        bool isTrue = true;
        unordered_map<char, int> m{
            {'(', 1},
            {'[', 2},
            {'{', 3},
            {')', 4},
            {']', 5},
            {'}', 6}
        };
        
        stack<char> st;

        for (char c : s) {
            if (1 <= m[c] && m[c] <= 3) st.push(c);
            else if (!st.empty() && m[st.top() == m[c]-3])
                st.pop();
            else {
                isTrue = false;
                break;
            }
        }
        if(!st.empty()) isTrue=false;

        return isTrue;
    }
};