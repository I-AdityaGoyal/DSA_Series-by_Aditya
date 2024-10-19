class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        arr[n - 1] = arr[n - 1] + 1;

        if (arr[n - 1] > 9) {
            for (int i = n - 1; i >= 0; i--) {

                if (arr[i] > 9) {
                    int ones = arr[i] % 10;
                    int tens = arr[i] / 10;
                    arr[i] = ones;

                    if (i - 1 < 0) {
                        arr.insert(arr.begin(), tens); // If first digit becomes > 9
                    } else
                        arr[i - 1] = arr[i - 1] + tens; // prev idx mai add kardo 
                }
            }
        }
        return arr;
    }
};