#include<bits/stdc++.h>
using namespace std;

int n, m ,u;
bool chuaxet[1005];
vector<int> List[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	cout << u << ' ';
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto v : List[x]){
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v] = false;
				cout << v << ' ';
			}
		}
	}
	cout << endl;
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
		BFS(u);
		cout << endl;
	}
}
