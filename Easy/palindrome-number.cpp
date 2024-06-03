#include <bits/stdc++.h>
#include <string>

using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        string temp = to_string(x);
        int i = 0;
        int j = temp.length() - 1;
        while (i < j && temp[i] == temp[j])
        {
            i++;
            j--;
        }
        return temp[i] == temp[j];
    }
};