class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        // int n = arr.size(), i = 0, j = n - 1;

        // while (i + 1 < n && arr[i] < arr[i + 1])
        //     i++;

        // while (j > 0 && arr[j - 1] > arr[j])
        //     j--;

        // return i > 0 && i == j && j < n - 1;



        int n = arr.size();
        if (n == 1)
            return false;

        int increasing = 1;
        for (int i = 1; i < n; i++) {

            if (arr[i] < arr[i - 1]) {
                if (i == 1) {
                    return false;
                }
                increasing = 0;
            }

            if (increasing) {
                if (arr[i] <= arr[i - 1]) {
                           return false;
                }
            } else {
                if (arr[i] >= arr[i - 1]) {
                    return false;
                }
            }
        }

        if (increasing == 1)
            return false;
        return true;
    }
};
