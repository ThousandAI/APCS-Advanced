#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, int c, int d){
    int max_ = a > b ? a : b;
    max_ = c > max_ ? c : max_;
    max_ = d > max_ ? d : max_;
    return max_;
}


int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vt(n, vector<int>(n, 0));
    vector<vector<int>> ans(n/2, vector<int>(n/2, 0));

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> vt[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i % 2 == 0 && j % 2== 0){
                ans[i/2][j/2] = f(vt[i][j], vt[i+1][j], vt[i][j+1], vt[i+1][j+1]);
            }
        }
    }

    for(int i = 0; i < n/2; ++i){
        for(int j = 0; j < n/2; ++j){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
