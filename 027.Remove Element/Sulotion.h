class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int x = 0;x < nums.size();x++) {
            if(val != nums[x]) {
                count ++;
            }
        }
        remove(nums.begin(), nums.end(), val) ;  
        nums.resize(count);
        return count;
    }
};