class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        // Logic -1

        // int n = nums.size();
        // vector<int> count(n+1, 0);

        // int duplicate, missing;

        
        // for (int num : nums) {
        //     count[num]++;
        // }

        
        // for (int i = 1; i <= n; i++) {

        //     if (count[i] == 2) 
        //         duplicate = i;

        //     else if (count[i] == 0)
        //         missing = i;
        // }

        // return {duplicate, missing};

        

        // Logic -2

        sort(nums.begin(), nums.end());
        int duplicate, missing;
        
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) 
                duplicate = nums[i];
            
        }
    
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        
        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;
        missing = expected_sum - (sum - duplicate);
        
        return {duplicate, missing};

    }
};