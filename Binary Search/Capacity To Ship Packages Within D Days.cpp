class Solution {
public:
    int findDays(vector<int> weight, int cap) {
        int day = 1, load = 0;
        for (int i = 0; i < weight.size(); i++) {
            if (weight[i] + load > cap) {
                day += 1;
                load = weight[i];
            } else
                load += weight[i];
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        // Range of capacity can be [max element, total sum];

        int low = *max_element(weights.begin(), weights.end()); // finding the max element;
        int high = accumulate(weights.begin(), weights.end() ,0); // sum of total elements 

        while(low<=high){
            int mid = low+(high-low)/2;
            int daysreq = findDays(weights, mid);
            if(daysreq <= days)
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
};