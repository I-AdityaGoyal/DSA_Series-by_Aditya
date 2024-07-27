bool canweplace(vector<int>& stalls, int mid, int k){
    int cowcnt = 1 ,last = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - last >= mid){
            cowcnt++;
            last = stalls[i];
        }
        if(cowcnt>=k) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int l=1, h=stalls[n-1] - stalls[0];

    while(l<=h){
        int mid = l+(h-l)/2;
        if(canweplace(stalls,mid,k) == true){
            l = mid+1;
        }
        else    
            h = mid-1;
    }
    return h;
}