#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp;
    int nopass_max, pass_min;
    vector<int> vt;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        vt.push_back(temp);
    }
    sort(vt.begin(), vt.end());
    for(int i = 0; i < n; ++i){
        if(i == n-1){
            cout << vt[i] << endl;
        }else{
            cout << vt[i] << " ";
        }
    }
    if(vt.front() >= 60){
        cout << "best case" << endl;
        cout << vt.front();
    }else if(vt.back() < 60){
        cout << vt.back() << endl;
        cout << "worst case";
    }else{
        for(int i = 0; i < n; ++i){
            if(vt[i] >= 60){
                cout << vt[i-1] << endl;
                cout << vt[i];
                break;
            }
        }
    }
    return 0;
}
