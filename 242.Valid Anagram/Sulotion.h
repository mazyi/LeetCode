class Solution {
public:
    bool isAnagram(string s, string t) {
        int one[26];
        int two[26];
        for(int i = 0;i<26; i++) {
            one[i] = two[i] = 0;
        }
        if(s.length() != t.length()) {
            return false;
        }
        for(int i = 0; i< s.length(); i++) {
            one[s[i] - 'a']++;
            two[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(one[i] != two[i]) {
                return false;
            }
        }
        return true;
    }
};