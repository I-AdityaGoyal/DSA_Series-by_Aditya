class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {

        int chance = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] <= nums[i - 1]) {

                if (chance == 0)
                    return false;

                chance--;

                if( i> 1 && nums[i] <= nums[i-2]){
                    nums[i] = nums[i-1];
                }
            }
        }

        return true;
    }
};