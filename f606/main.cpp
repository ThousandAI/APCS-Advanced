#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m , k;
  cin >> n >> m >> k;
  vector<vector<int>> Q(n, vector<int>(m, 0));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> Q[i][j];
    }
  }

  vector<vector<int>> vk(k, vector<int>(n, 0));
  for(int i = 0; i < k; ++i){
    for(int j = 0; j < n; ++j){
      cin >> vk[i][j];
    }
  }

  vector<vector<int>> flow(m, vector<int>(m, 0));
  vector<int> vcost;
  for(int i = 0; i < k; ++i){
    int cost = 0;
    for(int j = 0; j < n; ++j){
      for(int c = 0; c < m; ++ c){
        flow[vk[i][j]][c] += Q[j][c];
      }
    }
    for(int j = 0; j < m; ++j){
      for(int c = 0; c < m; ++c){
        if(j == c) cost += flow[j][c];
        else{
          if(flow[j][c] > 1000){
            int x = flow[j][c] - 1000;
            cost += 2*x + 3000;
          }else{
            cost += 3*flow[j][c];
          }
        }
      }
    }
    for(int j = 0; j < m; ++j){
      for(int c = 0; c < m; ++ c){
        flow[j][c] = 0;
      }
    }
    vcost.push_back(cost);
  }
  sort(vcost.begin(), vcost.end());
  cout << vcost[0];
  return 0;
}
