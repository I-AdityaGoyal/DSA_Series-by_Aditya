class Solution {
private:
    double solve(double x, long n) {
        if (n == 0) // n^0 = 1
            return 1;

        if (n < 0) // -ve N
            return solve(1 / x, -n);

        if (n % 2 == 0) //even
            return solve(x * x, n / 2);

        else // odd
            return x * solve(x * x, (n - 1) / 2);
    }

public:
    double myPow(double x, int n) { 
        
        return solve(x, (long)n);
    }
};