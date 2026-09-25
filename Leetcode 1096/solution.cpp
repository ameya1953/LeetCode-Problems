#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string s;
    int n;
    int i = 0;
    
    // This function returns the set of units of strings which are then further used for concatenation.
    set<string> getUnit() {
        set<string> result;

        if(s[i] == '{') {
            i++;
            result = performUnion();
        } else {
            result = {string(1,s[i])};
        }
        i++;
        
        return result;
    }
    set<string> performConcat() {
        set<string> result = {""};  // ordered set
    
        while(i < n && (s[i] == '{' || isalpha(s[i]))) {
            set<string> temp = getUnit();

            set<string> concatResult;
            for(const string& left : result) { // since result is an ordered set, c++ will give a compilation error here if const keyword is not used.
                for(const string& right : temp) {
                    concatResult.insert(left + right);
                }
            }
            result = concatResult;
        }
        return result;
    }
    set<string> performUnion() {
        set<string> result;

        while(true) {
            set<string> temp = performConcat();
            result.insert(begin(temp),end(temp));
            if(s[i] == ',' && i < n) {
                i++;
            } else {
                break;
            }
        }
        return result;
    }
    vector<string> braceExpansionII(string expression) {
        s = expression;
        n = expression.size();
        i = 0;

        set<string> st = performUnion();
        vector<string> result(begin(st),end(st));

        return result;
    }
};