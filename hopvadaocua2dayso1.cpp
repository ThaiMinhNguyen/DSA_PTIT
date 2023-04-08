#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		map<int, int> mp;
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> s;
		for(int i = 0; i < n;i++){
			cin >> a[i];
			mp[a[i]]++;
			s.insert(a[i]);
		}
		for(int i = 0; i < m;i++){
			cin >> b[i];
			mp[b[i]]++;
			s.insert(b[i]);
		}
		for(auto x : s){
			cout << x << " ";
		}
		cout << endl;
		for(auto x : s){
			if(mp[x] > 1){
				cout << x << " ";
			}
		}
		cout << endl;
	}
}
