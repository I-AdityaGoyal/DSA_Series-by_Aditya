class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        // Logic : 1

        // int num = 1;

        // int n = arr.size();
        // int i = 0;
        // while (i < n && k > 0) {

        //     if (arr[i] == num) {
        //         i++;
        //     } else {
        //         k--;
        //     }

        //     num++;
        // }

        // while (k--) {
        //     num++;
        // }

        // return num - 1;




        // Logic-2

        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {

            int mid = (low + high) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return low + k;
    }
};