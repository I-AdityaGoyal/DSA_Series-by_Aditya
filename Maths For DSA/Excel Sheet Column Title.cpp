class Solution {
public:
    string convertToTitle(int col) {
        string ans;
        while (col > 0) {
            col--;               // special case if col = 26;
            int rem = col % 26;  // last digit of col no.
            char ch = rem + 'A'; // charecter of that remiender
            ans.push_back(ch);   // pushing in that string
            col /= 26;           // for next no.
        }
        reverse(ans.begin(), ans.end()); // reverse string
        return ans;                      // result;
    }
};