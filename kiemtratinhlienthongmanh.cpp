#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> g[1005];
vector<int> tg[1005];
stack<int> st;


void DFS1(int u){
	chuaxet[u] = false;
	for(auto v : g[u]){
		if(chuaxet[v]){
			DFS1(v);
		}
	}
	st.push(u);
}

void DFS2(int u){
	chuaxet[u] = false;
	for(auto v : tg[u]){
		if(chuaxet[v]){
			DFS2(v);
		}
	}
	st.push(u);
}


int main(){
	int t, x, y, i;
	cin >> t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(i = 0;i < 1005; i++) g[i].clear();
		for(i = 0;i < 1005; i++) tg[i].clear();
		while(!st.empty()){
			st.pop();
		}
		cin >> n >> m;
		for(i = 1; i <= m; i++){
			cin >> x >> y;
			g[x].push_back(y);
			tg[y].push_back(x);
		}
		DFS1(1);
		memset(chuaxet, true, sizeof(chuaxet));
		int ans = 0;
		for(int i = 1; i <= n; i++){
			if(chuaxet[i]){
				DFS2(i);
				ans++;
			}
		}
		if(ans == 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
