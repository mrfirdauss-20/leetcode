class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret;
        int counter = 0;
        for(int i=0;i<nums.size();i++){
            if (counter == 0) ret = nums[i];

            if (ret == nums[i]) counter++;
            else counter--;
        }

        return ret;
    }
};
