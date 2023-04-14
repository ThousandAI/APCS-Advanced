#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K, Q, R;
    cin >> K >> Q >> R;

    vector<vector<int>> vt(Q, vector<int>(K, 0));
    vector<vector<char>> ans(Q+1, vector<char>(K, 0));

    for(int i = 0; i < K; ++i){
        cin >> ans[0][i];
    }

    for(int i = 0; i < Q; ++i){
        for(int j = 0; j < K; ++j){
            cin >> vt[i][j];
        }
    }

    for(int i = 0; i < Q; ++i){
        for(int j = 0; j < K; ++j){
            ans[i+1][vt[i][j]-1] = ans[i][j];
        }
    }

    for(int j = 0; j < R; ++j){
        for(int i = 1; i < Q+1; ++i){
            cout << ans[i][j];
        }
        cout << "\n";
    }
    return 0;
}
