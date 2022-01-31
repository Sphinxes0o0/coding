#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto e: nums) ret ^= e;
        return ret;
    }

    int singleNumber2(vector<int>& nums) {
        map<int, int> hash;
        map<int, int>::iterator it;

        for (int i = 0; i <= nums.size(); i++) 
            hash[nums[i]]++;
        
        for (it = hash.begin(); it != hash.end(); it++) {
            if ((*it).second == 1)
                return (*it).first;
        }

        return 0;

    }

};