#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main(){
	int n;
	cin >> n;
	int h[n];
	int g[n];
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++){
		cin >> h[i] >> g[i];
	}
	for(int i = 0; i < n; i++){
		v.push_back({h[i], g[i]});
	}
	sort(v.begin(), v.end(), cmp);
	long long ans = 0;
	int crt = 0;
	for(int i = 0; i < n;i++){
		if(v[i].first > crt){
			ans += v[i].second;
			crt = v[i].first;
		}
	}
//	for(auto x : v){
//		cout << x.first << ' ' << x.second << endl;
//	}
	cout << ans << endl;
}
