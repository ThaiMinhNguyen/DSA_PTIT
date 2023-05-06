#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];


void DFS(int u, int x, int y){ 
	chuaxet[u] = false;
	for(auto v : List[u]){
		if((x == u && y == v)|| (x == v && y == u)){
			continue;
		}
		if(chuaxet[v]){
			DFS(v, x, y);
		}
	}
}

void BFS(int u, int m, int n){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto v : List[x]){
			if((m == x && n == v) || (m == v && n == x)){
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
		vector<pair<int, int>> e;
		e.push_back({-1,-1}); //Dang sau xet bat dau tu e[1]
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			e.push_back({x, y});
			List[x].push_back(y);
			List[y].push_back(x);
		}
		sort(e.begin(), e.end());
		int ans = 0;
		for(int i = 1; i <= n; i++){
			if(chuaxet[i]){
				ans++;
				BFS(i, -1, -1);
			}
		}
		for(int i = 1; i <= m; i++){
			memset(chuaxet, true, sizeof(chuaxet));
			int s = 0;
			for(int j = 1; j <= n; j++){
				if(chuaxet[j]){
					s++;
					BFS(j, e[i].first, e[i].second);
				}
			}
			if(s > ans){
				cout << e[i].first << ' ' << e[i].second << ' ';
			}
		}
		cout << endl;
	}
}
