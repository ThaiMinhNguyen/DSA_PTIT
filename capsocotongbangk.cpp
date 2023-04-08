#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		map<int, int> mp;
		int a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			if(a[i] > k) break;
			int s = find(a+i+1, a+n, k-a[i]) - a;
			if(s < n && a[i] != a[s]){
				cnt += mp[a[s]];
			} else if(s < n){
				mp[a[s]]--;
				cnt+= mp[a[s]];
			}
		}
		cout << cnt << endl;
	}
}
