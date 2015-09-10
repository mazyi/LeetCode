class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int _m;
        int _n;
        _m = m;
        _n = n;
        
        if(m == 0) {
            nums1 = nums2;
            return;
        } else if(n == 0) {
            return;
        } else {
            vector<int> r;
            while(m > 0 && n > 0) {
                if(nums1[_m-m] < nums2[_n-n]) {
                    r.push_back(nums1[_m-m]);
                    m--;
                } else {
                    r.push_back(nums2[_n-n]);
                    n--;
                }
            }
            
            if(m==0) {
                for(int i = _n-n; i < _n; i++) {
                    r.push_back(nums2[i]);
                }
            } else {
                for(int i = _m - m; i < _m; i++) {
                    r.push_back(nums1[i]);
                }
            }
            nums1 = r;
        }
        return;
    }
};