#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	t = 1;
	while(t--){
		int n, m;
		cin >> n >> m;
		int d[n+2][n+2] = {1008};
		int x, y, z;
		for(int i = 1; i <= m; i++){
			cin >> x >> y >> z;
			d[x][y] = z;
			d[y][x] = z;
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cout << d[i][j] << ' ';
			}
			cout << endl;
		}
		for (int k = 1; k <= n; k++){
			for (int i = 1; i<=n; i++){
				for (int j = 1; j <= n; j++){
					if (d[i][j] > d[i][k] + d[k][j]) {
						d[i][j] = d[i][k] + d[k][j]; 
					}
				}
			}
		}	
		int s;
		cin >> s;
		while(s--){
			int u, v;
			cin >> u >> v;
			cout << d[u][v] << endl;
		}
	}
}

