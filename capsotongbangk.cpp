#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n-1; i++){
			int s = k - a[i];
			int y = lower_bound(a+i+1, a+n, s) - a;
			int x = upper_bound(a+i+1, a+n, s) - a;
			cnt = cnt + x - y;
		}
		cout << cnt << endl;
	}
}