#include <iostream>
using namespace std;

// ¸ê®Æ«¬ºA
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

// ¿é¤J/¿é¥X
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

// ¦r¦ê
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

// Reference(°Ñ¦Ò)
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

// Âù¼h¯x°}
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

// Âù¼h°j°é
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

// ¯x°}ªì©l¤Æ
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

// Âù¼h¯x°} (½m²ß)

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
