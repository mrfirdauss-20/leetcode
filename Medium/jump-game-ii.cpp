#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        long many[nums.size()];
        memset(many, 0, sizeof(many));
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            long man = INT_MAX;
            int j = 1;
            while (i + j < nums.size() && j <= nums[i])
            {
                man = min(man, 1 + many[i + j]);
                j++;
            }
            many[i] = man;
        }

        return many[0];
    }
};