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
    vector<vector<int>> image(7, vector<int>(7, 0));
    vector<vector<int>> filter(3, vector<int>(3, 0));
    vector<vector<int>> result(5, vector<int>(5, 0));

    cout << "Image: " << endl;
    for(int i = 0; i < 7; ++i){
        for(int j = 0; j < 7; ++j){
            cin >> image[i][j];
        }
    }

    cout << "Filter: " << endl;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> filter[i][j];
        }
    }

    cout << "Result: " << endl;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            int temp = 0, x = 0, y = 0;
            for(int m = i; m < i + 3; ++m){
                y = 0;
                for(int n = j; n < j + 3; ++n){
                    temp += image[m][n] * filter[x][y];
                    ++y;
                }
                ++x;
            }
            result[i][j] = temp;
        }
    }
    showVector2d(result);

    return 0;
}
