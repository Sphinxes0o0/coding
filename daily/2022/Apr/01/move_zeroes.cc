
#include <vector>


class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int left = 0, right = 0, n = nums.size();

        while (right < n) {
            if (nums[right]) {
                std::swap(nums[left], nums[right]);
                left++;
            }

            right++;
        }


    }

};

