class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        // Logic:1
        // set<vector<int>> st;
        // int n = arr.size();

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         for (int k = j + 1; k < n; k++) {
        //             if (arr[i] + arr[j] + arr[k] == 0) {
        //                 vector<int> temp = {arr[i], arr[j], arr[k]};
        //                 sort(temp.begin(), temp.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans;


        // //Logic:2
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && arr[i] == arr[i - 1])
                continue;

            int target = -arr[i];
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = arr[left] + arr[right];

                if (sum == target) {
                    ans.push_back({arr[i], arr[left], arr[right]});

                    while (left < right && arr[left] == arr[left + 1])
                        left++;
                    while (left < right && arr[right] == arr[right - 1])
                        right--;

                    left++;
                    right--;
                } else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};