#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> vt(n, vector<int>(m, 0));
    vector<vector<int>> d(k, vector<int>(4, 0));
    vector<int> ds(k, 1);

    for(int i = 0; i < k; ++i){
        for(int j = 0; j < 4; ++j){
            cin >> d[i][j];
        }
    }

    while(true){
        int temp = 0;
        for(int i = 0; i <k; ++i){
            temp += ds[i];
        }
        if(temp == 0) break;

        for(int i = 0; i < k; ++i){
            if(ds[i] != 0){
                int x = d[i][0];
                int y = d[i][1];
                ++vt[x][y];
                d[i][0] += d[i][2];
                d[i][1] += d[i][3];
                if(d[i][0] >= n || d[i][0] < 0 || d[i][1] >= m || d[i][1] < 0){
                    ds[i] = 0;
                }
            }
        }

        for(int i = 0; i < k; ++i){
            if(ds[i] != 0){
                int x = d[i][0];
                int y = d[i][1];
                if(vt[x][y] != 0){
                    ds[i] = 0;
                    vt[x][y] = -1;
                }
            }
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(vt[i][j] == -1) vt[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(vt[i][j] != 0) ++ans;
        }
    }
    cout <<  ans;
    return 0;
}
