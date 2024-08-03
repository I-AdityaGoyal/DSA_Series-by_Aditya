class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        // Logic - 1

        // int n = nums.size();
        // vector<int> result(n, 0);

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (nums[j] < nums[i]) {
        //             result[i]++;
        //         }
        //     }
        // }

        // return result;

        // Logic -2

        vector<int> ans;
        int cnt[101] = {0};

        for (int num : nums) {
            cnt[num]++;
        }

        for (int i = 1; i < 101; i++) {
            cnt[i] += cnt[i - 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                ans.push_back(0);
            else
                ans.push_back(cnt[nums[i] - 1]);
        }
        return ans;
    }
};