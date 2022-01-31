#include <iterator>
#include <vector>


using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i=0; i < nums.size(); i++) {
            if (nums[i] != 0)
                nums[j++] = nums[i];
        }

        for (; j < nums.size(); j++) {
            nums[j] = 0;
        }
    } 
    
    void moveZeroesSTL(vector<int>& nums) {
        auto it = std::remove_if( begin(nums), end(nums), [](int a){ return a == 0; } );
        for (; it < end(nums); it++) {
            *it = 0;
        }
    }
};


