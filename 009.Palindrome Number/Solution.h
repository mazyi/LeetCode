class Solution {
public:
    bool isPalindrome(int x) {
        int m = x;
        int n = 0;
        if( m < 0) {
            return false;
        } else if(x < 10) {
            return true;            
        } else {
            while(x) {
                n = x % 10 + n * 10;
                x = x / 10;
            }
            if(n == m) {
                return true;
            } else {
                return false;
            }
        }
    }
};