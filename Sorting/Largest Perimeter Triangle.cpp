class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        // Logic - 1

        //     int maxPerimeter = 0;
        //     int n = nums.size();

        //     for (int i = 0; i < n - 2; ++i) {
        //         for (int j = i + 1; j < n - 1; ++j) {
        //             for (int k = j + 1; k < n; ++k) {

        //                 int a = nums[i], b = nums[j], c = nums[k];
        //                 if (a + b > c && b + c > a && c + a > b) {

        //                     maxPerimeter = max(maxPerimeter, a + b + c);
        //                 }
        //             }
        //         }
        //     }
        //     return maxPerimeter;
        // }

        // Logic -2

        sort(nums.begin(), nums.end());

        for (int i = nums.size() - 1; i > 1; --i) {

            if (nums[i] < nums[i - 1] + nums[i - 2]) {

                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }
        return 0;
    }
};