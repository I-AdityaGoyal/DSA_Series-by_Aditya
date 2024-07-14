class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=1,e=num;
        while(s<=e){
            long long m = s+(e-s)/2;
            long long sq = m*m;
            if(sq==num)
                return true;
            else if(sq<num)
                s=m+1;
            else
                e=m-1;
        }
        return false;
    }
};