#include <bits/stdc++.h>

using namespace std;

void showVector2d(vector<vector<int>> &vt){
    for(int i = 0 ; i < vt.size(); ++i){
        for(int j = 0; j < vt[0].size(); ++j){
            cout << vt[i][j] << " ";
        }
        cout << "\n";
    }
}


int main()
{
    int R, C, K , m;
    cin >> R >> C >> K >> m;
    vector<vector<int>> ans(R+2, vector<int>(C+2, -1));
    vector<vector<int>> vtemp(R+2, vector<int>(C+2, 0));

    for(int i = 1; i <= R; ++i){
        for(int j = 1; j <= C; ++j){
            int temp;
            cin >> temp;
            ans[i][j] = temp;
        }
    }

    for(int x = 0; x < m; ++x){
        for(int i = 1; i <= R; ++i){
            for(int j = 1; j <= C; ++j){
                if(ans[i-1][j] != -1){
                    vtemp[i][j] -= ans[i][j] / K;
                    vtemp[i-1][j] += ans[i][j] / K;
                }
                if(ans[i][j-1] != -1){
                    vtemp[i][j] -= ans[i][j] / K;
                    vtemp[i][j-1] += ans[i][j] / K;
                }
                if(ans[i+1][j] != -1){
                    vtemp[i][j] -= ans[i][j] / K;
                    vtemp[i+1][j] += ans[i][j] / K;
                }
                if(ans[i][j+1] != -1){
                    vtemp[i][j] -= ans[i][j] / K;
                    vtemp[i][j+1] += ans[i][j] / K;
                }

            }
        }
        for(int i = 1; i <= R; ++i){
            for(int j = 1; j <= C; ++j){
                ans[i][j] += vtemp[i][j];
                vtemp[i][j] = 0;
            }
        }
    }
    int min_ = 100, max_ = 0;
    for(int i = 1; i <= R; ++i){
        for(int j = 1; j <= C; ++j){
            if(ans[i][j] != -1){
                min_ = ans[i][j] <= min_ ? ans[i][j] : min_;
                max_ = ans[i][j] >= max_ ? ans[i][j] : max_;
            }
        }
    }
    cout << min_ << "\n" << max_;
    return 0;
}
