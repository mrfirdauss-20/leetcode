#include <bits/stdc++.h>
#include <string>
#include <map>

using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        map<int, vector<string>> mp{
            {3, {"M", "MM", "MMM"}},
            {2, {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}},
            {1, {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}},
            {0, {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}}};
        string s = "";
        while (num > 0)
        {
            int digit = (int)log10((double)num);
            int sep = pow(10, digit);
            s += mp[digit][num / sep - 1];
            num = num % sep;
        }
        return s;
    }
};