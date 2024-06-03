#include <bits/stdc++.h>
#include <string>
#include <map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> mp{
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}};
        if (s.length() == 1)
            return mp[s[0]];
        int counter = 0;
        int i = 0;
        while (i < s.length())
        {
            if (i < s.length() - 1 && mp[s[i]] < mp[s[i + 1]])
            {
                counter += (mp[s[i + 1]] - mp[s[i]]);
                i += 2;
            }
            else
            {
                counter += mp[s[i]];
                i++;
            }
        }
        return counter;
    }
};