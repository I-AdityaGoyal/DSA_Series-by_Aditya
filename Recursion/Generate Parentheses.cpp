class Solution {
public:
    void generateCombinations(int open, int close, string current, vector<string>& result) {
        // If no open or close parentheses are left, add the current combination to the result
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }
        
        // Add an open parenthesis if any are left
        if (open > 0) 
            generateCombinations(open - 1, close, current + "(", result);
        
        // Add a close parenthesis if it doesn't create an invalid sequence
        if (close > open) 
            generateCombinations(open, close - 1, current + ")", result);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateCombinations(n, n, "", result); // Total Open '(', Total Close ')', curr string & res vector!
        return result;
    }
};
