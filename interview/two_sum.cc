#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int> twoSum(std::vector<int>&nums, int target) {
    int len = nums.size();
    for (int i = 0; i < len; ++i) {
        for (int j = i+1; i < len; ++j) {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }

    return {};
}

std::vector<int> twoSum2(std::vector<int>&nums, int target) {
    unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};

}

int main() {



    return 0;
}
