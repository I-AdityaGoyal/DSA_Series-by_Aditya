class Solution {
private:
    bool isalnum_fun(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }

    char tolower_fun(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            return c;

        return c + 32; //- 'A' + 'a';
    }

    bool check(string str) {
        int left = 0, right = str.size() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

public:
    bool isPalindrome(string s) {
        string str = "";

        for (char c : s) {
            if (isalnum_fun(c)) {  // isalnum() pre-define function
                str += tolower_fun(c); // tolower() pre-define function
            }
        }
        return check(str);
    }
};