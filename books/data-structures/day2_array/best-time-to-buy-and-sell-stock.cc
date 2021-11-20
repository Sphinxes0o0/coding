#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = (int)prices.size(), ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                ans = max(ans, prices[j] - prices[i]);
            }
        }
        return ans;
    }

    int maxProfit2(vector<int>& prices) {
        int inf = 1e9;
        int min_price = inf, max_profit = 0;

        for (int price: prices) {
            max_profit = max(max_profit, price - min_price);
            min_price = min(price, min_price);
        }
        return max_profit;
    }
};
