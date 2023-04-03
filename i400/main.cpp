#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<char>> e(m, vector<char>(n, 0));
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cin >> e[i][j];
        }
    }

    string T, S;
    cin >> T;

    for(int i = m-1; i >= 0; --i){
        int count_ = 0;
        for(int j = n-1; j >= 0; --j){
            if(e[i][j] == '1'){
                ++count_;
                S += T[j];
            }else if(e[i][j] == '0'){
                S = T[j] + S;
            }
        }
        if(count_ % 2 == 1){
            if(n % 2 == 1){
                string left = S.substr(0, n/2);
                string right = S.substr(n/2 + 1, n/2);
                S = right + S[n/2] + left;
            }else{
                string left = S.substr(0, n/2);
                string right = S.substr(n/2, n/2);
                S = right + left;
            }
        }

        T = S;
        S = "";
    }

    cout << T;
    return 0;
}
