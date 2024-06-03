#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string s = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            int j = 0;
            while (j < min(s.length(), strs[i].length()) && s[j] == strs[i][j])
            {
                j++;
            }
            while (j < s.length())
            {
                s.pop_back();
            }
        }
        return s;
    }
};