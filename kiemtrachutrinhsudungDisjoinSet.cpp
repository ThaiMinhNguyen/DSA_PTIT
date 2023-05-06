#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int num[1000101];
int m, n, ans;

void init(){
	for(int i = 1; i <= n; i++){
		num[i] = 1;
		parent[i] = i;
	}	
}

int Find(int u){
	if(u != parent[u]){
		parent[u] = Find(parent[u]);
	}
	return parent[u];
}

bool Union(int u, int v){
	int a = Find(u);
	int b = Find(v);
	if(a == b) return 0;
	else {
		if(num[a] < num[b]) swap(a, b);
		parent[b] = a;
		num[a] += num[b];
		return 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n >> m;
		init();
		bool check = false;
		while(m--){
			int u, v;
			cin >> u >> v;
			if(!Union(u, v)) check = true;
		}
		if(check){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

