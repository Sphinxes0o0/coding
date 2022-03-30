#include <unordered_set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (auto x: nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }

        return false;
    }

    bool containsDuplicate1(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i=0; i < n-1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }

};


int main() {


    return 0;
}