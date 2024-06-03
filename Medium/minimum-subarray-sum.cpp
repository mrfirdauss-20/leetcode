#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = -1;
        int j = -1;
        int temp = INT_MAX;
        int sum = 0;
        int size = nums.size();
        while (i < (size - 1))
        {
            while (sum >= target)
            {
                if (temp > i - j)
                    temp = i - j;
                j = j + 1;
                sum = sum - nums[j];
            }
            i = i + 1;
            sum = sum + nums[i];
        }
        while (sum >= target)
        {
            if (temp > i - j)
                temp = i - j;
            j = j + 1;
            sum = sum - nums[j];
        }
        if (temp == INT_MAX)
            return 0;
        else
            return temp;
    }
};