class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        k = k % length;
        int store[k];
        
        for(int i = 0; i < k; i++) {
            store[i] = nums[length + i - k];
        }
        
        for(int i = length - k - 1; i >= 0 ; i--) {
            nums[i + k] = nums[i];
        }
        
        for(int i = 0; i < k; i++) {
            nums[i] = store[i];
        }
        
    }
};