class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = nums[0];
        int countLast = 0;
        int counter = 0;
        int i =0;
        while(nums.size()>i){
            if (nums[i]==last){
                countLast++;
            }else{
                countLast=1;
                last = nums[i];
            }
            if (countLast<=2){
                counter++;
                i++;
            }else{
                nums.erase(nums.begin()+i);
            }
        }

        return counter;
    }
};
