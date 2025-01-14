class Solution {
public:
    void solve(vector<int>& nums, vector<int>& current, vector<vector<int>>& result, int index) {
        if (index == nums.size()) {
            result.push_back(current); // Base case: Add the subset to result
            return;
        }

        // Exclude the current element
        solve(nums, current, result, index + 1);

        // Include the current element
        current.push_back(nums[index]);
        solve(nums, current, result, index + 1);
        current.pop_back(); // Backtrack to remove the last added element
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        solve(nums, current, result, 0);
        return result;
    }
};
