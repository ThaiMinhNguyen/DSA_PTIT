#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m ,k;
		cin >> n >> m >> k;
		int a[n], b[m], c[k];
		vector<int> ans;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(mp[a[i]] == 0){
				mp[a[i]]++;
			}
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(mp[b[i]] == 1){
				mp[b[i]]++;
			}
		}
		for(int i = 0; i < k; i++){
			cin >> c[i];
			if(mp[c[i]] == 2){
				ans.push_back(c[i]);
			}
		}
		if(ans.size() > 0){
			for(auto x : ans){
				cout << x << " ";
			}
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
}
