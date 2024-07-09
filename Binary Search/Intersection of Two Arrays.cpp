class Solution {
public:
    vector<int> solve(vector<int>& small, vector<int>& big) {
        sort(big.begin(), big.end());

        vector<int> ans;

        for (int i = 0; i < small.size(); i++) {

            int s = 0;
            int e = big.size() - 1;
            int mid = 0;

            while (s <= e) {

                mid = s + (e - s) / 2;

                if (big[mid] == small[i]) {
                    if (find(ans.begin(), ans.end(), big[mid]) != ans.end())
                        break;
                    else
                        ans.push_back(big[mid]);
                } else if (big[mid] > small[i])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
        }

        return ans;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Logic:1
        // unordered_set<int> st(begin(nums1), end(nums1));

        // vector<int> result;

        // for (int& num : nums2) {
        //     if (st.find(num) != st.end()) {
        //         result.push_back(num);
        //         st.erase(num);
        //     }
        // }

        // return result;




        // Logic-2

        if (nums1.size() < nums2.size()) {
            return solve(nums1, nums2);
        } else {
            return solve(nums2, nums1);
        }
    }
};