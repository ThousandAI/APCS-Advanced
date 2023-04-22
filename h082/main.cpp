#include <iostream>
#include <vector>
using namespace std;

int main(){
int n, m, temp;
        cin >> n >> m;
        vector<int> S(n+1, 0), T(n+1, 0), idx, loseTimes(n+1, 0);
        vector<int> winner, loser;
        for(int i = 1; i <= n; ++i) cin >> S[i];
        for(int i = 1; i <=n; ++i) cin >> T[i];
        for(int i = 0; i < n; ++i){
            cin >> temp;
            idx.push_back(temp);
        }

        while(idx.size() > 1){
            for(int i = 0; i < idx.size() - 1; i=i+2){
                int p1 = idx[i], p2 = idx[i+1];
                long long a= S[p1], b = T[p1], c = S[p2] , d = T[p2];
                if(a*b >= c*d){
                    S[p1] = a + (c*d) / (2*b);
                    T[p1] = b + (c*d) / (2*a);
                    S[p2] = c + c / 2;
                    T[p2] = d + d / 2;
                    winner.push_back(p1);
                    ++loseTimes[p2];
                    if(loseTimes[p2] < m) loser.push_back(p2);
                }else{
                    S[p1] = a + a / 2;
                    T[p1] = b + b / 2;
                    S[p2] = c + (a*b) / (2*d);
                    T[p2] = d + (a*b) / (2*c);
                    winner.push_back(p2);
                    ++loseTimes[p1];
                    if(loseTimes[p1] < m) loser.push_back(p1);
                }
            }
            if(idx.size() % 2 == 1) winner.push_back(idx.back());
            idx.clear();
            for(int i = 0; i < winner.size(); ++i) idx.push_back(winner[i]);
            winner.clear();
            for(int i = 0; i < loser.size(); ++i) idx.push_back(loser[i]);
            loser.clear();
        }
        cout << idx[0];
        return 0;
}









