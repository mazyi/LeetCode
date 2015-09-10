class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        if(nums.size() == 0) {
            return s;
        }
        
        if(nums.size() == 1) {
            string range = to_string(nums[0]);
            s.push_back(range);
            return s;
        }
        
        int begin_num = nums[0];
        int end_num;
        bool isSame = false;
        
        for(int i = 1; i < nums.size(); i++) {
            
            if(nums[i] == nums[i-1] + 1) {
                if(!isSame) {
                    isSame = true;
                    begin_num = nums[i-1];
                }
            } else {
                if(!isSame) {
                    string range = to_string(begin_num);
                    s.push_back(range);
                    begin_num = nums[i];
                } else {
                    isSame = false;
                    end_num = nums[i-1];
                    string range = to_string(begin_num) + "->" + to_string(end_num);
                    s.push_back(range);
                    begin_num = nums[i];
                }
                
            }
    
            if(i == nums.size() - 1) {
                if(!isSame) {
                    string range = to_string(begin_num);
                    s.push_back(range);
                } else {
                    isSame = false;
                    end_num = nums[i];
                    string range = to_string(begin_num) + "->" + to_string(end_num);
                    s.push_back(range);
                }
            }
        }
        
        return s;
    }
};