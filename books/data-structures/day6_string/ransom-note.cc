#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i = 0; i < ransomNote.size(); i++) {
            int a = magazine.find(ransomNote[i]);
            if (a != -1) {
                magazine[a] = '0';
            } else { 
                return false;
            }
        }
        return true;
    }
};