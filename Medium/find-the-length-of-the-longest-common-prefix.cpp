#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        map<int, bool> mp;
        for (int i = 0; i < arr1.size(); i++)
        {
            int num = arr1[i];
            while (num > 0)
            {
                mp[num] = true;
                num = num / 10;
            }
        }

        int maxLen = 0;

        for (int i = 0; i < arr2.size(); i++)
        {
            int num = arr2[i];
            while (mp.find(num) == mp.end() && num > 0)
            {
                num = num / 10;
            }

            if (mp.find(num) != mp.end() && maxLen < (int)log10(num) + 1)
            {
                maxLen = (int)log10(num) + 1;
            }
        }

        return maxLen;
    }
};