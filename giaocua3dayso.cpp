#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, m;
		cin >> n >> k >> m;
		map<int, int> mp;
		map<int, int> ma, mb, mc;
		vector<long long> ans;
		long long a[n], b[k], c[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ma[a[i]]++;
			if(mp[a[i]] == 0){
				mp[a[i]]++;
			}
		}
		for(int i = 0; i < k; i++){
			cin >> b[i];
			mb[b[i]]++;
			if(mp[b[i]] == 1){
				mp[b[i]]++;
			}
		}
		for(int i = 0; i < m; i++){
			cin >> c[i];
			mc[c[i]]++;
			if(mp[c[i]] == 2){
				mp[c[i]]++;
				ans.push_back(c[i]);
			}
		}
		if(ans.size() < 1){
			cout << -1 << endl;
		} else {
			sort(ans.begin(), ans.end());
			for(auto x : ans){
				int s = min(ma[x], min(mb[x], mc[x]));
				for(int i = 0 ; i < s; i++){
					cout << x << " ";
				}
			}
			cout << endl;
		}
	}
}
