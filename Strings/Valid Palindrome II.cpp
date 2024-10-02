class Solution {
public:
    bool check(string str, int left, int right) {

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return check(s, left+1, right) || check(s, left, right-1);
            }
        }

        return true;
    }
};