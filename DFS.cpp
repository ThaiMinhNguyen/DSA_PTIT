#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];

void DFS(int u){
	chuaxet[u] = false;
	cout << u << ' ';
	for(auto v : List[u]){
		if(chuaxet[v]){
			DFS(v);
		}
	}
}

int main(){
	int t, x, y, i;
	cin >> t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m >> u;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	}
}
