class Solution {
public:
    bool judgeSquareSum(int c) {

        long int s = 0, e = sqrt(c);
        
        while (s <= e) {
            long long int cur = s * s + e * e;
            
            if (cur == c)
                return true;
            else if (cur > c)
                e--;
            else
                s++;
        }
        return false;
    }
};