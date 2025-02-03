void solve(int ones, int zeros, int n, string op, vector<string>& result) {
    if (n == 0) {
        result.push_back(op);
        return;
    }

    // Include '1' and recurse
    solve(ones + 1, zeros, n - 1, op + '1', result);

    // Include '0' only if the number of ones is greater than zeros
    if (ones > zeros) {
        solve(ones, zeros + 1, n - 1, op + '0', result);
    }
}
    
	vector<string> NBitBinary(int n)
	{
    	vector<string> result;
        solve(0, 0, n, "", result);
        return result;
	}