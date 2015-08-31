class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        int count = 1;
        int num = 1;
        int sign = 0 ;
        bool isFirst = true;
        bool isSame = false;
        while(num < nums.size()) {
            if(nums[num] == nums[num-1]) {
                if(isFirst) {
                    isFirst = false;
                    sign = num;
                }
                num ++;
            } else {
                count ++;
                if(!isFirst) {
                    nums[sign] = nums[num];
                    sign ++;
                }
                
                num++;
            }
        }
        return count;
    }
};