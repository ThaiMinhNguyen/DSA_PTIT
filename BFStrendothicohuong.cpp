#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];

void BFS(int u){
	chuaxet[u] = false;
	cout << u << ' ';
	queue<int> st;
	st.push(u);
	while(!st.empty()){
		int x = st.front();
		st.pop();
		for(auto v : List[x]){
			if(chuaxet[v]){
				chuaxet[v] = false;
				st.push(v);
				cout << v << ' ';
			}
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
		}
		BFS(u);
		cout << endl;
	}
}
