#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() == 3 && (nums[0] + nums[1] + nums[2] != 0))
            return {};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int l, r;
        for (int i = 0; i < nums.size(); i++)
        {
            l = i + 1;
            r = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (nums[l] == nums[l - 1] && l < r)
                    {
                        l++;
                    }
                }
                else if (-nums[i] > nums[l] + nums[r])
                    l++;
                else
                    r--;
            }
        }

        return res;
    }
};