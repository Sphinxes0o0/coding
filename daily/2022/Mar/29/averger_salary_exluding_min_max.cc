#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int min = salary[0], max = 0;

        int sum = 0;
        for (int i=0; i < salary.size(); i++) {
            
            cout << "salary " << salary[i] << endl;

            if (max < salary[i]) {
                max = salary[i];
                cout << "  max " << max << endl;
            } else if (min > salary[i]) {
                min = salary[i];
                cout << "    min " << min << endl;
            }
            sum += salary[i];
            cout << "sum " << sum << endl;
        }
        printf(" %d \n", sum - min - max );
       return (double)(sum - min - max ) / (salary.size() - 2); 
    }
};

int main() {

    Solution s;
    vector<int> salary = {4000, 3000,1000,2000};

    cout << "ret " << s.average(salary) << endl;

    return 0;
}
