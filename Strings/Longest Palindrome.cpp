class Solution {
    int code1(string s) {
        int n = s.length();
        unordered_set<char> st;

        int result = 0;
        for (char& ch : s) {
            if (st.count(ch)) {
                st.erase(ch);
                result += 2;
            } else {
                st.insert(ch);
            }
        }

        if (!st.empty())
            result++;

        return result;
    }

    int code2(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        int result = 0;
        for (char& ch : s) {
            mp[ch]++;
        }

        bool isOddPresent = false;

        for (auto& it : mp) {

            if (it.second % 2 == 0) {
                result += it.second;
            }
            else {
                result += it.second - 1;
                isOddPresent = true;
            }
        }

        if (isOddPresent)
            result++;

        return result;
    }

    
public:
    int longestPalindrome(string s) {
        // Logic-1
        // return code1(s);

        // Logic-2
        return code2(s);
    }
};
 