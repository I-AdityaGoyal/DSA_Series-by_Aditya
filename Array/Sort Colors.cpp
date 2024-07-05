class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Logic -1
        // sort(nums.begin(), nums.end());

        // Logic-2

        // int count[3] = {0, 0, 0};
        // for (int num : nums) {
        //     count[num]++;
        // }

        // int index = 0;
        // for (int i = 0; i < 3; i++) {
        //     while (count[i]--) {
        //         nums[index++] = i;
        //     }
        // }

        // Logic-3

        int i = 0, j = 0, k = nums.size() - 1;

        while (j <= k) {
            if (nums[j] == 0) {
                swap(nums[i++], nums[j++]);
            } else if (nums[j] == 1) {
                j++;
            } else {
                swap(nums[j], nums[k--]);
            }
        }



    }
};