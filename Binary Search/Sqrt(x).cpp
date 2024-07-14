
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int s = 1, e = x, m;

        while (s <= e) {
            m = s + (e - s) / 2;

            long long int square = static_cast<long long int>(m) * m;

            if (square > x) {
                e = m - 1;
            }

            else {
                s = m + 1;
            }
        }

        return e;
    }
};
