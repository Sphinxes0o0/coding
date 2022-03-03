#define vi vector<int>
#define ll long long 
#define len(x) x.size()
#define all(x) x.begin(), x.end()
#define db double
#define INF 1e9
class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        if (num % 9 == 0) {
            return 9;
        }
        return num % 9;
    }

    int addDigits1(int num) {
        if (num < 10) return num;

        int next = 0;
        while(num != 0) {
            next = next + num % 10;
            num /= 10;
        }
        return addDigits1(next);
    }

};

