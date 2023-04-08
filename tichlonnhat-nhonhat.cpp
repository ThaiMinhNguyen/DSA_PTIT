#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], b[k];
		int mx = INT_MIN;
		int mn = INT_MAX;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mx = max(mx, a[i]);
		}
		for(int i = 0; i < k; i++){
			cin >> b[i];
			mn = min(mn, b[i]);
		}
//		sort(a, a+n);
//		sort(b, b+k);
		long long s = 1;
		s = (long long)mx * (long long)mn;
		cout << s << endl;
	}
}
