#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c) return mat;

        int count = 0;
        vector<vector<int>> ans(r, vector<int>(c, 0));

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int x = count / c;
                int y = count % c;
                ans[x][y] = mat[i][j];
                ++count;
            }
        }
        return ans;
    }
};
