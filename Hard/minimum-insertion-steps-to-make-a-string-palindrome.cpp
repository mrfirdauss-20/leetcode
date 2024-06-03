#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int minInsertions(string s) {
        vector<vector<int>> dp(s.length(), vector<int>(s.length()));
        return s.length() - helper(s,0, s.length()-1, dp);
    }

    int helper(const string& s, int i, int j, vector<vector<int>>& dp){
        if(dp[i][j]>0) return dp[i][j];

        if(i==j) return 1;
        if(j<i) return 0;

        if(s[i]==s[j]) return dp[i][j] = 2+helper(s,i+1,j-1,dp);

        return dp[i][j]=max(helper(s,i+1,j,dp),helper(s,i,j-1,dp));
    }
};