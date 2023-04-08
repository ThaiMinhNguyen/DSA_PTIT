#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 1;
		vector<pair<int, int>> v;
		int m, k;
		for(int i = 0; i < n; i++){
			cin >> m >> k;
			v.push_back({m, k});
		}
		sort(v.begin(), v.end(), cmp);
		int check = v[0].second;
		for(int i = 1; i < n ; i++){
			if(v[i].first >= check){
				ans++;
				check = v[i].second;
			}
		}
		cout << ans << endl;
	}
}
