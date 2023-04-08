#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, m;
		cin >> n >> k >> m;
		vector<long long> ans;
		long long a[n], b[k], c[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < k; i++){
			cin >> b[i];
		}
		for(int i = 0; i < m; i++){
			cin >> c[i];
		}
		int ia = 0, ib = 0, ic = 0;
		while(ia < n && ib < k && ic < m){
			if(a[ia] == b[ib] && b[ib] == c[ic]){
				ans.push_back(a[ia]);
				ia++;
				ib++;
				ic++;
			}
			else if(a[ia] < b[ib]){
				ia++;
			} else if(b[ib] < c[ic]){
				ib++;
			} else {
				ic++;
			}
		}
		if(ans.size() < 1){
			cout << -1 << endl;
		} else {
			for(auto s : ans){			
				cout << s << " ";
			}
			cout << endl;
		}
	}
}