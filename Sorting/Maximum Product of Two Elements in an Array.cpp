class Solution {
public:
    int maxProduct(vector<int>& nums) {

        //  Logic - 1

        // int ans = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {

        //         int product = (nums[i] - 1) * (nums[j] - 1);
        //         ans = max(ans, product);
        //     }
        // }

        // return ans;


        // Logic - 2

        // sort(nums.begin(), nums.end(), greater<int>());

        // int n = nums.size();

        // if ((nums[1] != NULL) && (nums[1] > 0)) {
        //     return (nums[0] - 1) * (nums[1] - 1);
        // }

        // return (nums[0] - 1) * (nums[0] - 1);


        // Logic - 3

        int first_max = 0, second_max = 0;

        for (int num : nums) {

            if (num > first_max) {

                second_max = first_max;
                first_max = num;
            }
            
            else if (num > second_max) {
                second_max = num;
            }
        }

        return (first_max - 1) * (second_max - 1);
    }
};