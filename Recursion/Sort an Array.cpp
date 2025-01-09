class Solution {

    void sort(vector<int>& v) {

        if (v.size() == 1) // One element, already sorted!
            return;

        int temp = v[v.size() - 1]; // store last val
        v.pop_back();               // make array smaller

        sort(v); // sort smaller array

        insert(v, temp); // go and insert last val in correct position!
    }

    void insert(vector<int>& v, int temp) {

        // Single Element, last value in arr <= value we are inserting!
        if (v.size() == 0 || v[v.size() - 1] <= temp) {
            v.push_back(temp);
            return;
        }

        int last_val = v[v.size() - 1];
        v.pop_back(); // remove last element from array

        insert(v, temp); //  check wether this val can insert in array.

        // After that val got inserted, last_val ko pushback
        v.push_back(last_val);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums);
        return nums;
    }
};