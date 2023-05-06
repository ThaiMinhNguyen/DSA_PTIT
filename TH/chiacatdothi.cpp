#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];

void DFS(int u){
	chuaxet[u] = false;
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
		int ans = 0;
		int k = 0;
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m ;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			chuaxet[i] = false;
			for(int j = 1; j <= n; j++){
				if(chuaxet[j]){
					D
				}
			}
		}
		cout << endl;
	}
}
