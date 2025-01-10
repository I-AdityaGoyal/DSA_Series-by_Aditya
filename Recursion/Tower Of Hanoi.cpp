    // You need to complete this function
    
    void solve(int n, int s, int d, int h, int &cnt){
        
        // on every call +1 step
        cnt++;
        
        if(n==1){
            // cout << "move disk "<< n << " from rod "<< s << " to rod " << d << endl;
            return; 
        }
        
        solve(n-1, s, h, d, cnt); // n-1 plates fron S -> H
        
        // cout << "move disk "<< n << " from rod "<< s << " to rod " << d << endl;
        
        solve(n-1, h, d, s, cnt); // n-1 plates from H -> D
    }

    int towerOfHanoi(int n, int from, int to, int aux) {
        // Your code here
        
        if (n <= 0) return 0; // Return 0 directly for n = 0 or negative inputs
        
        int cnt = 0;
        solve(n, from, to, aux, cnt);
        
        return cnt;
    }