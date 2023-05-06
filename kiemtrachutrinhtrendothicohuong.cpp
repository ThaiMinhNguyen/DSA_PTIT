#include<bits/stdc++.h>
using namespace std;

int n, m ,u, k;
bool parent[1005];
int colour[1005];
vector<int> List[1005];

bool DFS(int u){
	colour[u] = 1;
	for(auto v : List[u]){
		if(colour[v] == 0){
			if(DFS(v)) return true;
		} else if(colour[v] == 1) {
			return true;
		}
	}
	colour[u] = 2;
	return false;
}

bool check(){
	for(int i = 1; i <= n; i++){
		if(colour[i] == 0){
			if(DFS(i)){
				return true;
			}
		}
	}
	return false;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		memset(colour, 0, sizeof(colour));
		for(int i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		int x, y;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
		}
		if(check()){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
