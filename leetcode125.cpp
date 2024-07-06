#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

class Solution {
private:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int k = 0;
        int e = n - 1;

        while (k < e) {
            swap(s[k++], s[e--]);
        }
    }

    bool isAlphanumeric(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    char toLowerCase(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c + 32;
        }
        return c;
    }

public:
    bool isPalindrome(string s) {
        vector<char> filtered;
        for (char c : s) {
            if (isAlphanumeric(c)) {
                filtered.push_back(toLowerCase(c));
            }
        }

        vector<char> reversed = filtered;
        reverseString(reversed);

        return filtered == reversed;
    }
};
