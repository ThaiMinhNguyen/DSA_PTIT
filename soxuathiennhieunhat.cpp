#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		int max = -1;
		int ans;
		for(int i =0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
			if(max < mp[a[i]]){
				max = mp[a[i]];
				ans = a[i];
			}
		}
		if(max > n/2){
			cout << ans << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
		 