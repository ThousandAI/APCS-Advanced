#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>vt(10, vector<int>(10, 0));

void rotate(int r, int c){
    vector<vector<int>> rotatevt(10, vector<int>(10, 0));
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            rotatevt[c-1-j][i] = vt[i][j];
        }
    }
    vt = rotatevt;
}

void flip(int r, int c){
    vector<vector<int>> flipvt = vt ; // copy
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            flipvt[r-1-i][j] = vt[i][j];
        }
    }
    vt = flipvt;
}

int main()
{
    int R, C, M;
    while(cin >> R >> C >> M){
        vector<int> vM;
        for(int i = 0; i < R; ++i){
            for(int j = 0; j < C; ++j){
                cin >> vt[i][j];
            }
        }
        for(int i = 0; i < M; ++i){
            int temp;
            cin >> temp;
            vM.push_back(temp);
        }
        for(int i = M-1; i > -1; --i){
            if(vM[i] == 0){
                rotate(R, C);
                int t = R;
                R = C;
                C = t;
            }else if(vM[i] == 1){
                flip(R, C);
            }
        }
        cout << R << " " << C << endl;

        for(int i = 0; i < R; ++i){
            for(int j = 0; j < C; ++j){
                if(j == C - 1){
                    cout << vt[i][j] << endl;
                }else{
                    cout << vt[i][j] << " ";
                }
            }
        }
    }
    return 0;
}
