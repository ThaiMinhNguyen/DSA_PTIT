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

void Union(int u, int v){
	int a = Find(u);
	int b = Find(v);
	if(a == b) return;
	else {
		if(num[a] < num[b]) swap(a, b);
		parent[b] = a;
		num[a] += num[b];
		ans++;
	}
}

int main(){
	int t;
	t = 1;
	while(t--){
		ans = 0;
		cin >> n >> m;
		init();
		for(int i = 1; i <= n; i++){
			
		}
		cout << ans << endl;
	}
}

