class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) {
            return false;
        }
        int x = 1;
        for(int i=1;i<32;i++) {
            if((n&x) == n) {
                return true;
            }
            x<<=1;
        }
    }
};