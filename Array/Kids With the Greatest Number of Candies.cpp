class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int ec) {

        vector<bool> ans;

        int maxi = *max_element(arr.begin(), end(arr));

        for (int i = 0; i < arr.size(); i++) {

            arr[i] = arr[i] + ec;

            if (arr[i] >= maxi) {
                ans.push_back(true);

            } else
                ans.push_back(false);
        }

        return ans;
    }
};