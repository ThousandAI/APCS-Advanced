#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;
    vector<vector<int>> A(s, vector<int>(t, 0));
    vector<vector<int>> B(n, vector<int>(m, 0));

    int sumA = 0;
    int ans = 0;
    vector<int> candidate;

    for(int i = 0; i < s; ++i){
        for(int j = 0; j < t; ++j){
            cin >> A[i][j];
            sumA += A[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < n-s+1; ++i){
        for(int j = 0; j < m-t+1; ++j){
            int different = 0, total  = 0;
            for(int k = 0; k < s; ++k){
                for(int l = 0; l < t; ++l){
                    if(A[k][l]!= B[k+i][l+j]){
                        different++;
                    }
                    total += B[k+i][l+j];
                }
            }
            if(different <= r){
                candidate.push_back(total);
            }
        }
    }
    cout << candidate.size() << "\n";
    if(candidate.size() < 1){
        cout << -1;
    }else{
        for(int i = 0; i < candidate.size(); ++i){
            if(i == 0)
                ans = abs(candidate[i] - sumA);
            else
                ans = abs(candidate[i] - sumA) < ans ? abs(candidate[i] - sumA) : ans;
        }
        cout << ans;
    }

    return 0;
}
