#include<bits/stdc++.h>
using namespace std;

bool cmd(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		vector<pair<int, int>> v;
		for(int i = 0; i <n; i++){
			cin >> a[i];
		}
		for(int i = 0; i <n; i++){
			cin >> b[i];
		}
		for(int i = 0; i <n; i++){
			v.push_back({a[i], b[i]});
		}
		sort(v.begin(), v.end(), cmd);
		int cnt = 1;
		int begin = v[0].second;
		for(int i = 1; i < n; i++){
			if(v[i].first >= begin){
				cnt++;
				begin = v[i].second;
			}
		}
		cout << cnt << endl;
	}
}