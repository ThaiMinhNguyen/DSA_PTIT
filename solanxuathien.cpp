#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
//		map<int, int> mp;
		int sum = 0;
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == k){
				sum++;
			}
		}
//		int y = upper_bound(a, a+n, k) - a;
//		int x = lower_bound(a, a+n, k) - a;
//		int ans = y - x;
//		cout << ans << endl;
		if(sum){
			cout << sum << endl;
		} else {
			cout << -1 << endl;
		}
	}
}