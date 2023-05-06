#include<bits/stdc++.h>
using namespace std;

int n, m ,u, k;
bool chuaxet[1005];
vector<int> List[1005];
int check = 0;
int en;
vector<int> ans;
int parent[1005];

void DFS(int u, int k){
	if(check) return;
	chuaxet[u] = false;
	for(auto v : List[u]){
		if(chuaxet[v]){
			parent[v] = u;
			DFS(v, u);
		} else if(v == 1 && v != parent[u]) {
			check = 1;
			en = u;
			break;
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		ans.clear();
		check = 0;
		memset(parent, 0, sizeof(parent));
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		int x, y;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}	
		for(int i = 1;i <= n; i++){
			sort(List[i].begin(), List[i].end());
		}
		DFS(1, 0);
		stack<int> st;
		if(check){
			cout << 1 << ' ';
			while(parent[en]){
				st.push(en);
				en = parent[en];
			}
			while(!st.empty()){
				en = st.top();
				cout << en << ' ';
				st.pop();
			}
			cout << 1 << endl;
		} else {
			cout << "NO"<< endl;
		}
	}
}
