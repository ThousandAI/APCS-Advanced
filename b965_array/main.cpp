#include <bits/stdc++.h>
using namespace std;

int ans[10][10] = {};
int mk[10] = {};

void rotate(int r, int c){
	int r_temp[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			r_temp[c-1-j][i] = ans[i][j];
		}
	}

	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			ans[i][j] = r_temp[i][j];
		}
	}
}

void flip(int r, int c){
	int temp[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			temp[r-1-i][j] = ans[i][j];
		}
	}
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			ans[i][j] = temp[i][j];
		}
	}
}

int main(){
	int R, C, M;
	while(cin >> R >> C >> M){
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				cin >> ans[i][j];
			}
		}
		for(int i = 0; i < M; ++i){
			cin >> mk[i];
		}
		for(int i = M-1; i > -1; --i){
			if(mk[i] == 0){
                rotate(R, C);
                int t = R;
				R = C;
				C = t;
			}
			else if(mk[i] == 1){
                flip(R, C);
			}
		}
		cout << R << " " << C << endl;
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				if( j == C - 1)
					cout << ans[i][j] << endl;
				else
					cout << ans[i][j] << " ";
			}
		}

	}
	return 0;
}
