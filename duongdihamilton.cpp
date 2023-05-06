#include<bits/stdc++.h>
using namespace std;


int n, m;
vector<int> a[1005];
bool chuaxet[1005];
bool ok;

void dfs(int u, int k){
	for(auto v : a[u]){
		if(chuaxet[v] == 0){
			continue;
		}
		if(k == n){
			ok = 1;
			return;
		}
		chuaxet[v] = 0;
		dfs(v, k+1);
		chuaxet[v] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005;i++){
			a[i].clear();
		}
		ok = 0;
		cin >> n >> m;
		for(int i = 1; i <= m; i++){
			int x, y;
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			memset(chuaxet, 1, sizeof(chuaxet));
			dfs(i, 1);
			if(ok){
				cout << 1 << endl;
				break;
			}	
		}
		if(!ok){
			cout << 0 << endl;
		}
	}
}
