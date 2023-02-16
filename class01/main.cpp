//#include <iostream>
//#include <vector>
//#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Data Type
/*
int main()
{
    char grade = 'A';
    int n1 = 12;
    float n2 = 3.2;
    double n3 = 6.8;
    bool isGood = true;
    string host = "Thousand";
    return 0;
}
*/

// Input/Output
/*
int main(){
    int age;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your name is: " << name << ", and age is: " << age << endl;
    return 0;
}
*/

// String
/*
int main(){
    string slogan = "Welcome To APCS-Advanced";
    cout << "String length: " << slogan.length() << endl;
    for(int i = 0; i < slogan.length(); ++i){
        cout << slogan[i];
    }
    cout << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    return 0;
}
*/

// Reference
/*
void swap(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
}

int main(){
    int a = 3, b= 5;
    swap(a, b);
    cout << "a is: " << a << ", b is: " << b << endl;
    return 0;
}
*/

// 2D Matrix
/*
int main(){
    int arr[3][2] = {{10, 6}, {5, 2}, {3, 12}};
    cout << arr[0][0] << endl;
    cout << arr[0][1] << endl;
    cout << arr[1][0] << endl;
    cout << arr[1][1] << endl;
    cout << arr[2][0] << endl;
    cout << arr[2][1] << endl;
    return 0;
}
*/

// Nested Loop
/*
int main(){
    int arr[3][2] = {{10, 6}, {5, 2}, {3, 12}};
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 2; ++j){
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// Initialize Matrix
/*
int main(){
    int arr[3][2] = {};
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 2; ++j){
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
    int m, n;
    cin >> m >> n;
    int brr[m][n];
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            brr[i][j] = 0;
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout <<brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

*/

// 2D Matrix (Practice)
/*
int main(){
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    for(int i = 0; i < r; ++i){
        int r_max;
        for(int j = 0; j < c; ++j){
            if(j == 0){
                r_max = arr[i][j];
            }
            else{
                r_max = arr[i][j] > r_max ? arr[i][j] : r_max;
            }
        }
        cout << r_max << endl;
    }
    return 0;
}
*/

// vector
/*
int main(){
    vector<int> vt;
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        vt.push_back(temp);
    }
    cout << vt.size() << endl;
    cout << vt.front() << endl;
    cout << vt.back() << endl;
    for(int i = 0; i < vt.size(); ++i){
        cout << vt[i] << " ";
    }
    cout << endl;
    // sort
    sort(vt.begin(), vt.end()); // ascending
    for(int i = 0; i < vt.size(); ++i){
        cout << vt[i] << " ";
    }
    cout << endl;
    sort(vt.begin(), vt.end(), greater<int>());
    for(int i = 0; i < vt.size(); ++i){
        cout << vt[i] << " ";
    }
    return 0;
}
*/

// vector 2D
/*
int main(){
    vector<vector<int>> vt;
    vt = {{1,2}, {3,5}, {6,7}};
    for(int i = 0; i < vt.size(); ++i){
        for(int j = 0; j < vt[0].size(); ++j){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------" << endl;
    vector<int> tem;
    vt.clear();
    tem = {1,10};
    vt.push_back(tem);
    tem = {3, 2};
    vt.push_back(tem);
    tem = {7, 8};
    vt.push_back(tem);
    for(int i = 0; i < vt.size(); ++i){
        for(int j = 0; j < vt[0].size(); ++j){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// vector (practice)
int main(){
    int r, c;
    vector<vector<int>> vt;
    cin >> r >> c;
    for(int i = 0; i < r; ++i){
        vector<int> vtemp;
        for(int j = 0; j < c; ++j){
            int temp;
            cin >> temp;
            vtemp.push_back(temp);
        }
        vt.push_back(vtemp);
    }
    for(int i = 0; i < vt.size(); ++i){
        for(int j = 0; j < vt[0].size(); ++j){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
