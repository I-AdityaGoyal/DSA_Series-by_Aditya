class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();            
        int n = grid[0].size();
        int start = 0;
        int end = n-1;
        int ans = 0;

        for(int i = 0;i<m;i++){
            
            while(start<=end){
                int mid = start + (end - start)/2;
                if(grid[i][mid] < 0){
                    end = mid-1;
                }
                else{
                    start = mid + 1;
                }
            }
            
            
        }
        return ans;
    }
};