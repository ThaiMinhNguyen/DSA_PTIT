#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int num[1000101];
int m, n, ans;


struct canh{
	int dau, cuoi, ts;
};

bool cmp(canh a, canh b){
	return a.ts < b.ts;
}

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
		vector<canh> v;
		for(int i = 0; i < m; i++){
			int dau, cuoi, ts;
			cin >> dau >> cuoi >> ts;
			v.push_back({dau, cuoi, ts});
		}
		sort(v.begin(), v.end(), cmp);
		for(int i = 0; i < v.size(); i++){
			if(Union(v[i].dau, v[i].cuoi)){
				ans = ans + v[i].ts;
			}
		}
		cout << ans << endl;
	}
}



