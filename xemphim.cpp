#include<bits/stdc++.h>
using namespace std;
int a[102];
int f[102][25002];
int c, n;

void qhd(){
	memset(f, 0, sizeof(f));
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= c; j++){
			f[i][j] = f[i-1][j];
			if(a[i] <= j){
				f[i][j] = max(f[i][j], f[i-1][j-a[i]] + a[i]);
			}
		}
	}
	cout << f[n][c];
}


int main(){
	cin >> c >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	qhd();
}
