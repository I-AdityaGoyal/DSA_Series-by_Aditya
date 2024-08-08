class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // Logic -1( o(m+n*Log(m+n)) )

        // for (int i = 0; i < n; ++i) {
        //     nums1[m + i] = nums2[i];
        // }

        // sort(nums1.begin(), nums1.end());



        // Logic -2 both ( o(m+n) )

        // vector<int> sorted(m + n);
        // int i = 0, j = 0, k = 0;

        // while (i < m && j < n) {

        //     if (nums1[i] <= nums2[j]) {
        //         sorted[k++] = nums1[i++];
        //     }
        //     else {
        //         sorted[k++] = nums2[j++];
        //     }
        // }

        // while (i < m) {
        //     sorted[k++] = nums1[i++];
        // }

        // while (j < n) {
        //     sorted[k++] = nums2[j++];
        // }

        // for (int p = 0; p < m + n; ++p) {
        //     nums1[p] = sorted[p];
        // }



        // Logic -3 ( o(m+n) )

        int i = m - 1; // Pointer for nums1
        int j = n - 1; // Pointer for nums2
        int k = m + n - 1; // Pointer for merged array in nums1

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {

                nums1[k--] = nums1[i--];
            }

            else {

                nums1[k--] = nums2[j--];
            }
        }

        // Copy any remaining elements from nums2 (if any)
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};