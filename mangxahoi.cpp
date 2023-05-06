#include<bits/stdc++.h>
using namespace std;

int n, m ,u, k;
bool chuaxet[100005];
vector<int> List[100005];

int main(){
	int t;
	cin >> t;
	while(t--){
		int check = 1;
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0;i < 1005; i++) List[i].clear();
		cin >> n >> m;
		int x, y;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i = 1; i <=n; i++){
			for(auto v : List[i]){
				if(List[v].size() != List[i].size()){
					check = 0;
					cout << "NO" << endl;
					break;
				}
			}
			if(!check) break;
		}
		if(check == 1){
			cout << "YES" << endl;
		}
	}
}
