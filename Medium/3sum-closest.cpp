class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() == 3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        int left = 1;
        int right = nums.size()-1;
        int closest = nums[left]+nums[right]+nums[0];
        int diff = abs(closest-target);
        for(int i=0; i<nums.size()-2 && target!=closest; i++){
            left = i+1;
            right = nums.size()-1;
            int tempSum = nums[left]+nums[right]+nums[i];
            if (abs(tempSum-target)<diff) {
                closest = tempSum;
                diff = abs(tempSum-target);
            }
            while(left<right-1 && closest!=target){
                if(tempSum < target) {
                    left++;
                }else {
                    right--;
                }
                tempSum = nums[i]+nums[left]+nums[right];
                if (abs(tempSum-target)<diff) {
                    closest = tempSum;
                    diff = abs(tempSum-target);
                }
            }
        }

        return closest;

    }
};
