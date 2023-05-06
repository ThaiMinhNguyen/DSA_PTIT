#include<bits/stdc++.h>
using namespace std;

int n, m ,u, k;
bool chuaxet[1005];
vector<int> List[1005];
int check = 0;

void DFS(int u, int k){
	chuaxet[u] = false;
//	cout << u << ' ';
	if(u == k){
		check = 1;
		return;
	}
	for(auto v : List[u]){
		if(chuaxet[v]){
			DFS(v, k);
		}
	}
}

int main(){
	int t, x, y, i;
	cin >> t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int s;
		cin >> s;
		while(s--){
			memset(chuaxet, true, sizeof(chuaxet));
			check = 0;
			int u, k;
			cin >> u >> k;
			DFS(u, k);
			if(check == 1){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
		
	}
}
