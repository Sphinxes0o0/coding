#include <vector>
#include <algorithm>
#include <iostream>
#include <ctime>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Time: O(n*n)
    // Space: O(n*n)
    bool containsDuplicate_1(vector<int>& nums) {
        for (int n: nums) {
            for (int j: nums) {
                if ( n == j) return true;
            }
        }
        return false;
    }

    // Time: O(n * log_n)
    // Space: O(log_n)
    bool containsDuplicate_2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n -1; i++) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }

    bool containsDuplicate_3(vector<int>& nums) {
        unordered_set<int> s;
        for (int x: nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};


int main() {
    clock_t start_1, finish_1, start_2, finish_2, start_3, finish_3;
    Solution s;
    vector<int> nums = {1,2,3,0,4,5,6,7,8,9,10,11,12,13,14,15,16,199,12334,213214,123126};


    start_1 = clock();
    s.containsDuplicate_1(nums);
    finish_1 = clock();

    start_2 = clock();
    s.containsDuplicate_2(nums);
    finish_2 = clock();

    start_3 = clock();
    s.containsDuplicate_3(nums);
    finish_3 = clock();

    cout<< finish_1 - start_1 << "/" << CLOCKS_PER_SEC << "s" << endl;

    cout<< finish_2 - start_2 << "/" << CLOCKS_PER_SEC << "s" << endl;

    cout<< finish_3 - start_3 << "/" << CLOCKS_PER_SEC << "s" << endl;

    return 0;
}