#include <vector>
#include <algorithm>

using namespace std;

class Sulotion {
public:
    // Time:  O(n)
    // Space:  O(n)
    int maxSubArray(vector<int>& nums) {
        int pre = 0, maxAns = nums[0];

        for (const auto &x: nums) {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};

int main() {


    return 0;
}