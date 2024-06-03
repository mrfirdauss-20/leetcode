#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        bool isSuc[nums.size()];
        isSuc[nums.size() - 1] = true;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            bool will = false;
            int j = 1;
            while (!will && j <= nums[i])
            {
                will = isSuc[i + j];
                j++;
            }
            isSuc[i] = will;
        }
        return isSuc[0];
    }
};