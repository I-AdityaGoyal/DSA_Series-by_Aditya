class Solution {
public:

    void rotate(vector<vector<int>>& v) {
        int n = v.size();

        for(int i=0; i<n-1; i++){
            for(int j = i+1; j<n;j++){
                swap(v[i][j], v[j][i]);
            }
           
        }

        for(int i = 0; i<n; i++){
             reverse(v[i].begin(), v[i].end());
        }
    }


    void rotate(vector<vector<int>>& v) {
        int n = v.size();

        for(int i=0; i<n; i++){
            for(int j = i+1; j<n;j++){
                swap(v[i][j], v[j][i]);
            }
            reverse(v[i].begin(), v[i].end());
        }
    }



    // void rotate(vector<vector<int>>& v) {
    //     int n = v.size();

    //     vector<vector<int>> ans( n , vector<int> (n));

    //     for(int i = 0; i<n; i++){
    //         for(int j = 0; j<n; j++){
                
    //             ans[j][n-1-i] = v[i][j];
    //         }
    //     }

    //     for(int i=0; i<n; i++){
    //         for(int j = 0; j<n; j++){

    //             v[i][j] = ans[i][j];

    //         }   
    //     }     
    // }
};