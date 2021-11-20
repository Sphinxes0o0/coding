#include <vector>
#include <unordered_map>

class Solution {
public:
    // Time: N^2, Space: O(1)
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i +1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }

    // Time: O(N), Space: O(N)
    std::vector<int> twoSum2(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) 
                return {it->second, i};

            hashtable[nums[i]] = i;
        }
        return {};
    }
};