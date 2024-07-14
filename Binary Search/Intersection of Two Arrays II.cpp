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
                    ans.push_back(big[mid]);
                    break;
                }

                else if (big[mid] > small[i])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
        }

        return ans;
    }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // sort(begin(nums1), end(nums1));
        // sort(begin(nums2), end(nums2));

        // int i = 0;
        // int j = 0;

        // vector<int> result;

        // while (i < nums1.size() && j < nums2.size()) {
        //     if (nums1[i] == nums2[j]) {
        //         result.push_back(nums1[i]);
        //         i++;
        //         j++;
        //     } else if (nums1[i] < nums2[j]) {
        //         i++;
        //     } else {
        //         j++;
        //     }
        // }

        // return result;

        if (nums1.size() < nums2.size()) {
            return solve(nums1, nums2);
        } else {
            return solve(nums2, nums1);
        }
    }
};