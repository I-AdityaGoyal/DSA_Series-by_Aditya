class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        if(s.size() == 0) return 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int cnt=0;
        int i = g.size()-1;
        int j = s.size()-1;

        while(i>=0 && j>=0){
            
            if(s[j]>=g[i]){
                cnt++;
                i--;
                j--;
            }
            else
                i--;
        }
        return cnt;
    }
    
};