class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n = nums.size();
        // int max_sum = INT_MIN;

        // for (int i = 0; i < n; ++i) {
        //     for (int j = i; j < n; ++j) {
        //         int current_sum = 0;
        //         for (int k = i; k <= j; ++k) {
        //             current_sum += nums[k];
        //         }
        //         max_sum = max(max_sum, current_sum);
        //     }
        // }
        // return max_sum;


        // int n = nums.size();
        // int max_sum = INT_MIN;

        // for (int i = 0; i < n; ++i) {

        //     int current_sum = 0;
        //     for (int j = i; j < n; ++j) {

        //         current_sum += nums[j];
        //         max_sum = max(max_sum, current_sum);
        //     }
        // }
        // return max_sum;


        // int n = nums.size();
        // int max_sum = INT_MIN;
        // int current_sum = 0;

        // for (int i = 0; i < n; ++i) {
        //     current_sum = max(nums[i], current_sum + nums[i]);
        //     max_sum = max(max_sum, current_sum);
        // }
        // return max_sum;


        int n = nums.size();
        int max_sum = nums[0];
        int current_sum = 0;

        for (int i = 0; i < n; ++i) {
            current_sum = current_sum + nums[i];
            max_sum = max(max_sum, current_sum);

            if (current_sum < 0)
                current_sum = 0;
        }
        return max_sum;

    }
};