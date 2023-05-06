#include<bits/stdc++.h>
using namespace std;

int n, m;
bool chuaxet[1005];
vector<int> List[1005];
int a[1001][1001];

void DFS(int u){
	chuaxet[u] = false;
	for(int v = 1; v <= n; v++){
		if(chuaxet[v] == 0 && a[u][v] == 1){
			DFS(v);
		}
	}
}

int kt(){
//	DFS(1);
//	int ok = 1;
//	for(int v = 1; v <= n; v++){
//		if(chuaxet[v] == 0){
//			return 0;
//		}
//	}
	int canh = 0;
	for(int v = 1; v <= n; v++){
		int deg = 0;
		for(int i = 1; i <= n; i++){
			if(a[v][i] == 1){
				deg++;
			}
		}
		if(deg % 2 == 1){
			canh++;
		}
	}
	if(canh > 2){
		return 0;
	} 
	if(canh >= 1){
		return 1;
	}
	return 2;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		memset(a, 0, sizeof(a));
		memset(chuaxet, true, sizeof(chuaxet));
		cin >> n >> m;
		int x, y;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		cout << kt() << endl;
	}
}

