#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];


void DFS(int u, int x){ 
	chuaxet[u] = false;
	for(auto v : List[u]){
		if(x == u|| x == v){
			continue;
		}
		if(chuaxet[v]){
			DFS(v, x);
		}
	}
}

void BFS(int u, int m){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto v : List[x]){
			if(m == x || m == v){
				continue;
			}
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v] = false;
			}
		}
	}
}

int main(){
	int t, x, y;
	cin >> t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int ans = 0;
		for(int i = 1; i <= n; i++){
			if(chuaxet[i]){
				ans++;
				DFS(i, -1);
			}
		}
//		cout << ans << endl;
		for(int i = 1; i <= n; i++){
			memset(chuaxet, true, sizeof(chuaxet));
			int s = 0;
			chuaxet[i] = false;
			for(int j = 1; j <= n; j++){
				if(chuaxet[j]){
					s++;
					DFS(j, i);
				}
			}
			if(s > ans){
				cout << i << ' ';
			}
		}
		cout << endl;
	}
}
