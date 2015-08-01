class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0;
        int begin = s.length();
        int end = -1;
        if(s.length() == 0) {
            return 0;
        }
        for(int i=s.length()-1;i>=0;i--) {
            if( s[i] != ' ' && flag == 0) {
                flag = 1;
                begin = i;
            }
            if( s[i] == ' ' && flag == 1) {
                end = i;
                break;
            }
        }
        if(begin < end) {
            end = -1;
        }
        if(flag == 1) {
            return begin - end;
        }
        return 0;
    }
};