class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r;
        vector<int> t;
        if(numRows == 0) {
            return r;
        } else if(numRows == 1) {
            t.push_back(1);
            r.push_back(t);
            return r;
        } else if(numRows == 2) {
            t.push_back(1);
            r.push_back(t);
            t.push_back(1);
            r.push_back(t);
            return r;
        } else {
                t.push_back(1);
                r.push_back(t);
                t.push_back(1);
                r.push_back(t);
            for(int i = 2; i < numRows; i++) {
                t.clear();
                t.push_back(1);
                for(int j = 1; j< i; j++) {
                    t.push_back(r[i-1][j-1] + r[i-1][j]);
                }
                t.push_back(1);
                r.push_back(t);
            }
            return r;
        }
        
    }
};