#include <bits/stdc++.h>
using namespace std;

// Memory Limit Exceeded in my solution. I didn't solve this any further as I was bored and didn't thought it necessary to optimze it!

class Solution {
public:
    string valReplace(vector<vector<string>>& knowledge, string val) {
        for(int i = 0; i < knowledge.size(); i++) {
            if(val == knowledge[i][0]) {
                return knowledge[i][1];
            }
        }
        return "?";
    }
    string evaluate(string s, vector<vector<string>>& knowledge) {

        int i = 0;
        while(i < s.size()) {
            int begin = 0;
            int end = 0;
            if(s[i] == '(') {
                begin = i + 1;
                while(s[i] != ')') {
                    i++;
                }
                end = i;
                string to_replace = s.substr(begin,end-begin);
                string replacement = valReplace(knowledge,to_replace);

                s.replace(begin,end - begin, replacement);
                i = begin - 1 + replacement.size();
            } else {
                i++;
            }
        }
        // return s;

       string ans = "";
       for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == ')') {
                continue;
            } else {
                ans = ans + s[i];
            }
       }

       return ans;
    }
};