#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    // T: O(m+n), S: O( min(m,n) ) 
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) 
            return intersect(nums2, nums1);

        unordered_map<int, int> hashtable;
        for (int num: nums2) {
            cout<< "hashtable 1: " << hashtable[num] <<endl;
            ++hashtable[num];
            cout<< "hashtable 2: " << hashtable[num] <<endl;
            cout << "\n";
        }

        vector<int> intersection;
        for (int num: nums2) {
            if (hashtable.count(num)) {
                intersection.push_back(num);
                --hashtable[num];
                if (hashtable[num] == 0) hashtable.erase(num);
            }
        }
        return intersection;
    }

    // T: O(m*log_m + n*log_n) , S: O(min(m,n))
    vector<int> intersect_1(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int len1 = nums1.size(), len2 = nums2.size();
        vector<int> intersection;

        int index1 = 0, index2 = 0;

        while (index1 < len1 && index2 < len2) {
            if (nums1[index1] < nums2[index2]) 
                index1++;
            else if (nums1[index1] > nums2[index2])
                index2++;
            else {
                intersection.push_back(nums1[index1]);
                index1++;
                index2++;    
            }
        }
        return intersection;
    }
};


int main(int argc, char* argv[]) {
    vector<int> v1, v2;
    v1 = {1, 2, 2, 1};
    v2 = {2, 2};

    Solution s;
    s.intersect(v1, v2);

    return 0;
}