#include<bits/stdc++.h>
using namespace std;

int m = 1e9+7;
long long c[1002][1002];
int n, k;

void qhd(){
	memset(c, 0, sizeof(c));
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j){
				c[i][j] = 1;
			} else {
				c[i][j] = (c[i-1][j]+c[i-1][j-1]) % m;
			}
		}
	}
	cout << c[n][k] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		qhd();
	}
}
