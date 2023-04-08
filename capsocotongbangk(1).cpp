#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		long long cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			if(a[i] > k) break;
			int x = upper_bound(a+i+1, a+n, k - a[i]) - a;
			int y = lower_bound(a+i+1, a+n, k - a[i]) - a;
			int s = x - y;
			cnt = cnt + s;
		}
		cout << cnt << endl;
	}
}

