#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1002][1002];
int d[1002];
int e[1002];
int vs[1002];

void Dijkstra(int s){
	int u, v;
	for (v=1; v <= n; v++){
		d[v]= a[s][v]; 
		e[v]=s;
	}
	d[s]= 0; e[s] = 0; vs[s]= 1;
	while(1){
		int u= 0, min = INT_MAX;
		for (v=1; v <= n; v++) {
			if (vs[v] == 0 && d[v] < min){
				u = v; min = d[v];
			}
		}
		if (u == 0) return; 
		vs[u]= 1;
		for (v=1; v<=n; v++){
			if (vs[v] == 0 && d[v]> d[u]+a[u][v]) {
				d[v]= d[u] + a[u][v]; e[v] = u; 
			}
		}
	}
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(a, 10005	, sizeof(a));
		memset(vs, 0, sizeof(vs));
		int s;
		cin >> n >> m >> s;
		int x, y, z;
		for(int i = 1; i <= m; i++){
			cin >> x >> y >> z;
			a[x][y] = min(z, a[x][y]);
			a[y][x] = min(z, a[y][x]);
		}
		Dijkstra(s);
		for(int i = 1; i <= n; i++){
			cout << d[i] << ' ';
		}
		cout << endl;
	}
}

