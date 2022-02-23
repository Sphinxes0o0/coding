#include <utility>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>&nums, int target) {
    int len = nums.size();
    for (int i = 0; i < len; ++i) {
        for (int j = 0; i < len; ++j) {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }

    return {};
}

std::vector<int> twoSum2(std::vector<int>&nums, int target) {
    std::unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        auto iter = hashtable.find(target - nums[i]);
        if (iter != hashtable.end())
            return {iter->second, i};

        hashtable.insert(std::pair<int, int>(nums[i], i));
    }
    return {};
}

int main() {



    return 0;
}
