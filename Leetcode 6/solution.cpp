#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        // Base Case:
        if(numRows == 1 || n <= numRows) return s;

        vector<vector<char>> charMat(numRows, vector<char>(n,' '));
        // General Case:
        int col = 0;
        for(int i = 0; i < n; ) {
            for(int j = 0; j < numRows && i < n; j++) {  // j -> row
                charMat[j][col] = s[i];
                i++;
            }
            col++;
            // Now at this point, we move diagonally up
            for(int j = numRows - 1 - 1; j > 0 && i < n; j--) {
                charMat[j][col] = s[i];
                i++;
                col++;
            }
            
        }
        // We will get the arrangement as required after this for loop. 
        // Let us now print the characters in the matrix rowise to get the desired answer.
        string ans;

        for(int i = 0; i < numRows; i++) { // i -> row
            for(int j = 0; j < n; j++) {   // j -> column
                if(charMat[i][j] != ' ') {
                    ans += charMat[i][j];
                }
            }
        }

        return ans;
    }
};