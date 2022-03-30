#include <iostream>
#include <cstdlib>


class Solution {
    public:
        /* time limit
        int countOdds(int low, int high) {
            int ret;
            long tmp = low;
            while(tmp <= high) {
                if (tmp % 2 == 1) {
                    std::cout<<"odd number: " << tmp << std::endl;
                    ret++;
                    tmp++;
                    std::cout<< "counter :" << ret << std::endl;
                } else {
                    tmp++;
                }
            }

            return ret;
        }
        */
        int countOdd(int low, int high) {
            return ( high - low ) / 2 + (low & 1 + high & 1);
        }

};



int main(int argc, char* argv[]) {
    Solution s;

    s.countOdd(atoi(argv[1]),atoi(argv[2]));

    return 0;
}

