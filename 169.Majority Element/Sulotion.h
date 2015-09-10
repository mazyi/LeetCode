class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        int threshold = nums.size() / 2;
        int count = 1;
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(count == 0) {
                max = nums[i];
            }
            if(nums[i] == max) {
                count ++;
            } else {
                count --;
            }
        }
        return max;
    }
};