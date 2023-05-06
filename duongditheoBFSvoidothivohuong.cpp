#include<bits/stdc++.h>
using namespace std;

int n, m ,u, k;
bool chuaxet[1005];
vector<int> List[1005];
int parent[1005];

void BFS(int u){
	chuaxet[u] = false;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(auto v : List[u]){
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v] = false;
				parent[v] = u;
			}
		}
	}
}

void trace(int u, int k){
	memset(parent, 0, sizeof(parent));
	BFS(u);
	if(chuaxet[k]){
		cout << -1 << endl;
		return;
	}
	vector<int> path;
	int t = k;
	while(t != u){
		path.push_back(t);
		t = parent[t];
	}
	path.push_back(u);
	reverse(path.begin(), path.end());
	for(auto x : path){
		cout << x << ' ';
	}
	cout << endl;
	return;
}

int main(){
	int t, x, y, i;
	cin >> t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		memset(parent, 0, sizeof(parent));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m >> u >> k;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		trace(u, k);
	}
}
