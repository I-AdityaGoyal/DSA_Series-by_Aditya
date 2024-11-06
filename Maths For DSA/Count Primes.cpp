class Solution {
private:
    bool isprime(int n) {

        for (int k = 2; k < n; k++) {
            if (n % k == 0)
                return false;
        }
        return true;
    }

public:
    int countPrimes(int n) {

        //   Logic-1

        // int cnt = 0;
        // for (int i = 2; i < n; i++) {
        //     if (isprime(i))
        //         cnt++;
        // }
        // return cnt;


        // Logic - 2

        int cnt = 0;
        
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                cnt++;

                for (int j = 2 * i; j <= n; j = j+i) {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};