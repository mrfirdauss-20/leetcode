#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution
{
public:
    // int helper(string s, int i, int j);
    int longestPalindromeSubseq(string s)
    {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n));
        return helper(s, 0, n - 1, dp);
    }

    int helper(const string &s, int i, int j, vector<vector<int>> &dp)
    {
        if (dp[i][j] != 0)
            return dp[i][j];

        if (i == j)
            return 1;
        if (i > j)
            return 0;

        if (s[i] == s[j])
            return dp[i][j] = 2 + helper(s, i + 1, j - 1, dp);
        return dp[i][j] = max(helper(s, i + 1, j, dp), helper(s, i, j - 1, dp));
    }
};