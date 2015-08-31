class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size()-1;
        digits[x] ++;
        while(x > 0) {
            if(digits[x] == 10) {
                digits[x-1] ++;
                digits[x] = 0;
            } else {
                x = 0;
            }
            x--;
        }
        if(digits[0] == 10) {
            digits[0] = 0;
            digits.push_back(0);
            for(int i = x; i > -1; i--) {
                digits[x+1] = digits[x];
            }
            digits[0] = 1;
        }
        return digits;
    }
};