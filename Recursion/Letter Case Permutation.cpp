class Solution
{
public:
    vector<string> letterCasePermutation(string s)
    {
        vector<string> res;
        solve(s, 0, res);
        return res;
    }

    void solve(string &s, int index, vector<string> &res)
    {
        if (index == s.length())
        {
            res.push_back(s);
            return;
        }

        if (isalpha(s[index]))
        {
            // Change current character to lowercase and recurse
            s[index] = tolower(s[index]);
            solve(s, index + 1, res);

            // Change current character to uppercase and recurse
            s[index] = toupper(s[index]);
            solve(s, index + 1, res);

            // Backtrack: restore the original character case (optional since we are covering both cases)
            // s[index] = original character (we don't need to do this explicitly)
        }
        else
        {
            // If it's a digit, just move to the next character
            solve(s, index + 1, res);
        }
    }
};
