#include <bits/stdc++.h>
#include <string>

using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        if (s.length() == 0)
            return 0;
        char x = 'n';
        int i = 0;
        long res = 0;
        long upper = INT_MAX;
        upper = upper + long(1);
        bool isMin = false;
        while (x != 'd' && (res <= upper) && i < s.length())
        {
            if (s[i] >= 58 || s[i] == 46)
                x = 'd';
            else if (x != 'n' && s[i] <= 47)
                x = 'd';
            else if (s[i] == '+')
                x = 'f';
            else if (s[i] == '-')
            {
                x = 'f';
                isMin = true;
            } // ignore
            else if (s[i] >= 48 && s[i] <= 57)
            {
                res = res * 10;
                res = res + int(s[i] - '0');
                x = 'f';
            }
            i++;
        }
        if (isMin)
            res = res * -1;
        if (res < INT_MIN)
            res = INT_MIN;
        else if (res > INT_MAX)
            res = INT_MAX;
        return res;
    }
};