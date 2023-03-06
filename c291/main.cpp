#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> vt;
    vector<bool> b;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        vt.push_back(temp);
        b.push_back(false);
    }
    for(int i = 0; i < n; ++i){
        if(b[i] == false){
            int k = i;
            while(b[k] == false){
                b[k] = true;
                k = vt[k];
            }
            ans++;
        }
    }
    cout << ans;
    return 0;
}
