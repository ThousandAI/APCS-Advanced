#include <bits/stdc++.h>

using namespace std;

void showVector1d(vector<int> &vt){
    for(int i = 0; i < vt.size(); ++i){
        cout << vt[i] << " ";
    }
}

void showVector2d(vector<vector<int>> &vt){
    for(int i = 0; i < vt.size(); ++i){
        for(int j = 0; j < vt[0].size(); ++j){
            cout << vt[i][j] << " ";
        }
        cout << "\n";
    }
}

// vector 1d
/*
int main()
{

    int n;
    cin >> n;
    vector<int> vt1;
    for(int i = 0; i < n; ++i){
        vt1.push_back(0);
    }
    showVector1d(vt1);
    cout << "\n" ;
    vector<int> vt2(n, 0);
    showVector1d(vt2);
    return 0;
}
*/

// vector2d
/*
int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> vt3;
    for(int i = 0; i < r; ++i){
        vector<int> vtemp;
        for(int j = 0; j < c; ++j){
            vtemp.push_back(0);
        }
        vt3.push_back(vtemp);
    }
    showVector2d(vt3);
    cout << "\n";

    vector<vector<int>> vt4(r, vector<int>(c, 0));
    showVector2d(vt4);
    return 0;
}
*/

// vector vs. array
/*
int main(){
    vector<int> vt1(5, 0);
    vector<int> vt2;
    vt2 = vt1; // copy
    vt1[1] = 5;
    vt2[0] = 3;
    showVector1d(vt1);
    cout << "\n";
    showVector1d(vt2);
    cout << "\n";
    cout << "--------------\n";
    vector<vector<int>> vt3(3, vector<int>(5, 0));
    vector<vector<int>> vt4;
    vt4 = vt3;
    vt3[2][1] = 7;
    vt4[1][4] = 8;
    showVector2d(vt3);
    cout << "\n";
    showVector2d(vt4);
    int arr[3] = {};
    int brr[3];
    brr = arr; // error
    return 0;
}
*/

void bubbleSort(vector<int> &vt){
    for(int i = 0; i < vt.size() -1 ; ++i){
        for(int j = 0; j < vt.size() -1; ++j){
            if(vt[j] > vt[j+1]){
                int temp = vt[j];
                vt[j] = vt[j+1];
                vt[j+1] = temp;
            }
        }
        for(int k = 0; k < vt.size(); ++k){
            cout << vt[k] << " ";
        }
        cout << "\n";
    }
}
// bubbleSort
int main(){
    vector<int> vt = {3, 7, 10, 2, 1};
    bubbleSort(vt);
    return 0;
}



