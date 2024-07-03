#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int i=0;
            int k = (x%10);
            i++;
            x = x/10;
            
            if (ans > INT_MAX/10 || (ans == INT_MAX / 10 && x > 7)) return 0;
            if (ans < INT_MIN/10 || (ans == INT_MIN / 10 && x < -8)) return 0;

            ans = ans*10 + k;
        }
        
        return ans;
    }
};

int main(){


    return 0;
}