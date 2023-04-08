#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		vector<char> v;
		vector<int> value;
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]] == 0){
			v.push_back(s[i]);
			}
			mp[s[i]]++;
		}
		int ans = mp[v[0]];
		for(int i = 0; i < v.size(); i++){
			value.push_back(mp[v[i]]);
		}
		sort(value.begin(), value.end());
		int t = value[value.size()-1];
//		for(int i = value.size()-2; i >= 0; i--){
//			if(t >= value[i]){
//				t-= value[i];
//			} else {
//				t = value[i] - t;
//			}
//		}
//		cout << t << endl;
//		for(int i = 1; i < v.size(); i++){
//			ans = abs(ans - mp[v[i]]);
//		}
//		cout << ans << endl;
		if(s.size()-t >= t-1){
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
}