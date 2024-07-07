class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Logic - 1

        // int n = nums.size();
        // int sum = n * (n + 1) / 2;
        // for (int i = 0; i < n; i++) {
        //     sum -= nums[i];
        // }
        // return sum;



        // Logic - 2

        // int ans = nums.size();
        // for(int i = 0; i<nums.size(); i++) {
        //     ans ^= i;
        //     ans ^= nums[i];
        // }
        // return ans;



        // Logic - 3

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid] == mid) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start;
        
    }
};