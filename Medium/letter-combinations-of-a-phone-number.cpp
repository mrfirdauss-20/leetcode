#include <bits/stdc++.h>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    map<char, string> mmp{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};

    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};
        vector<string> result;
        string current;
        dfs(digits, 0, current, result);
        return result;
    }

    void dfs(const string &digits, int index, string &current, vector<string> &result)
    {
        if (index == digits.size())
        {
            result.push_back(current);
            return;
        }

        char digit = digits[index];
        const string &letters = mmp[digit];
        for (char letter : letters)
        {
            current.push_back(letter);
            dfs(digits, index + 1, current, result);
            current.pop_back();
        }
    }
};
