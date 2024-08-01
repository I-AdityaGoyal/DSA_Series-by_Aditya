class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Logic -1

        // vector<int> evens, odds;
        // for (int num : nums) {
        //     if (num % 2 == 0) {
        //         evens.push_back(num);
        //     } else {
        //         odds.push_back(num);
        //     }
        // }
        // evens.insert(evens.end(), odds.begin(), odds.end());
        // return evens;

        // Logic - 2

        int left = 0, right = nums.size() - 1;

        while (left < right) {
            
            if (nums[left] % 2 > nums[right] % 2) {
                swap(nums[left], nums[right]);
            }

            if (nums[left] % 2 == 0)
                left++;
            if (nums[right] % 2 == 1)
                right--;
        }

        return nums;
    }
};