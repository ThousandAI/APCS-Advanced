#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int new_r = c;
        int new_c = r;
        vector<vector<int>> ans;
        for(int i = 0; i < new_r; ++i){
            vector<int> vtemp;
            for(int j = 0; j < new_c; ++j){
                vtemp.push_back(0);
            }
            ans.push_back(vtemp);
        }
        for(int i = 0; i < r; ++i){
            for(int j = 0; j < c; ++j){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
