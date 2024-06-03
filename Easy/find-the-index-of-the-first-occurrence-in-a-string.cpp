#include <bits/stdc++.h>
#include <string>

using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i = 0;
        int iterator = 0;
        while (iterator < needle.length() && i + iterator < haystack.length())
        {
            if (haystack[i + iterator] == needle[iterator])
            {
                iterator = iterator + 1;
            }
            else
            {
                i = i + 1;
                iterator = 0;
            }
        }
        if (iterator == needle.length())
            return i;
        else
            return -1;
    }
};