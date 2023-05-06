#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];


void DFS(int u){
	chuaxet[u] = false;;
	for(auto v : List[u]){
		if(chuaxet[v]){
			k.push_back(make_pair(u, v));
			DFS(v);
		}
	}
}

void T_DFS(int u){	
	DFS(u);
	if(k.size() == n-1){
		for(auto i : k){
			cout << i.first << ' ' << i.second << endl;
		}
	} else {
		cout << -1 << endl;	
	}
}

int main(){
	int t, x, y, i;
	cin >> t;
	while(t--){
		k.clear();
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m >> u;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		T_DFS(u);
	}
}
