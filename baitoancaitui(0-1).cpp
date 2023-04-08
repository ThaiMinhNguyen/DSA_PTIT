#include<bits/stdc++.h>
using namespace std;
int c[1005][1005], gt[1005], kl[1005];

void Check(int n, int m){
	memset(c, 0, sizeof(c));
	for(int i = 1;i <= n; i++){
		for(int j = 1; j <= m; j++){
			c[i][j] = c[i-1][j];
			if(kl[i] <= j){
				c[i][j] = max(c[i][j], c[i-1][j-kl[i]]+gt[i]);
			}
		}
	}
	cout << c[n][m] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			cin >> kl[i];
		}
		for(int i = 1; i <= n; i++){
			cin >> gt[i];
		}
		Check(n, m);
	}
}
