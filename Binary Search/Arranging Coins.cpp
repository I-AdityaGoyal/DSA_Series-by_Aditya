class Solution {
public:
    bool canWeMake(long long int row, long long int coinsHave) {

        long long int coinsNeeded = (row * (row + 1)) / 2; 

        return coinsNeeded <= coinsHave;
    }

    int arrangeCoins(int n) {
        // Logic - 1
        // int cnt = 0, i = 1;
        // while (true) {

        //     if ((n - i) <= n && (n - i) >= 0) {
        //         n = n - i;
        //         cnt++;
        //     }

        //     else
        //         return cnt;

        //     i++;
        // }
        // return 0;

        // Logic - 2
        long long int low=0, high = n;
        int res=0;

        while(low <= high){

            int mid = low + (high-low)/2;

            if(canWeMake(mid, n)){
                res = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }

        return res;
    }
};