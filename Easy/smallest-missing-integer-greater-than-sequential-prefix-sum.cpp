#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return nums[0]+1;
        int prefsum = nums[0];
        int i=1;
        while(i<nums.size() && nums[i]==nums[i-1]+1 ){
            prefsum += nums[i];
            i++;
        }
        i=i-1;
        sort(nums.begin(), nums.end());
        while(i<nums.size() && prefsum>nums[i]){
        while(nums.size()>i && prefsum>nums[i]){
            i++;
        }
        while(nums.size()>i && nums[i]==prefsum){
            prefsum++;
            i++;
        }
        }
        return nums[i-1] < prefsum ? prefsum : nums[i-1]+1;
    }
};