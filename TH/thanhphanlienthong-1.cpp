#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];

void DFS(int u){
	chuaxet[u] = false;
//	cout << u << ' ';
	for(auto v : List[u]){
		if(chuaxet[v]){
			DFS(v);
		}
	}
}

int main(){
	int t, x, y, i;
	t = 1;
	while(t--){
		int check = 0;
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m >> u;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		for(int i = 1; i <= n; i++){
			if(chuaxet[i]){
				check = 1;
				cout << i << endl;
			}
		}
		if(check == 0){
			cout << 0;
		}
		cout << endl;
	}
}
