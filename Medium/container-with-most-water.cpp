#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int vol = 0;
        while (i < j)
        {
            if (vol < ((j - i) * min(height[j], height[i])))
                vol = (j - i) * min(height[j], height[i]);
            if (height[i] < height[j])
                i = i + 1;
            else
                j = j - 1;
        }
        return vol;
    }
};