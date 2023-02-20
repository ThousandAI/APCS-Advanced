#include <bits/stdc++.h>
using namespace std;

// Rotate 90 (nxn)
/*
int main() {
  int mat[3][3] = {{3, 2, 5}, {-1, 7, 3}, {5, -2, 8}};
  int new_mat[3][3] = {};
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      new_mat[j][3-1-i] = mat[i][j];
    }
  }
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      cout << new_mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
*/

// Rotate 90 (m*n)
/*
int main() {
  int r, c, temp;
  cin >> r >> c;
  int mat[r][c];
  for(int i = 0; i < r; ++i){
    for(int j = 0; j < c; ++j){
      cin >> temp;
      mat[i][j] = temp;
    }
  }
  int new_r = c;
  int new_c = r;
  int new_mat[new_r][new_c];
  for(int i = 0; i < r; ++i){
    for(int j = 0; j < c; ++j){
      new_mat[i][j] = 0;
    }
  }

  for(int i = 0; i < r; ++i){
    for(int j = 0; j < c; ++j){
      new_mat[j][r-1-i] = mat[i][j];
    }
  }

  for(int i = 0; i < new_r; ++i){
    for(int j = 0; j < new_c; ++j){
      cout << new_mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
*/

// Binary search
/*
int binarySearch(int arr[], int number){

    int low = 0, high = 12;
    int mid = (low + high) / 2;

    while(true){
        if(number == arr[mid]){
            return mid;
        }else if(number < arr[mid]){
            high = mid - 1;
            mid = (low + high) / 2;
        }else if(number > arr[mid]){
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }
}

int main(){
    int arr[13] = {3, 5, 7, 8, 9, 11, 13, 15, 20, 23, 27, 28, 32};
    int num;
    cin >> num;
    int ans = binarySearch(arr, num);
    cout << ans;
    return 0;
}
*/

// binary search advanced
int binarySearch(int arr[], int number){

    int low = 0, high = 12;
    int mid = (low + high) / 2;

    while(low <= high){
        if(number == arr[mid]){
            return mid;
        }else if(number < arr[mid]){
            high = mid - 1;
            mid = (low + high) / 2;
        }else if(number > arr[mid]){
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }

    return high + 1;
}

int main(){
    int arr[13] = {3, 5, 7, 8, 9, 11, 13, 15, 20, 23, 27, 28, 32};
    int num;
    cin >> num;

    int ans = binarySearch(arr, num);
    cout << ans;
    return 0;
}
