class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        
        int maxi =0;

        for(int i =0; i< arr.size(); i++){
            int sum =0;

            for(int j = 0; j<arr[i].size(); j++){

                sum += arr[i][j];

            }

            maxi = max(sum , maxi);
        }

        return maxi;
    }
};