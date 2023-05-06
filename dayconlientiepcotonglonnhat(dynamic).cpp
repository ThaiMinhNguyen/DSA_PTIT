#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){	
		int f[102] = {0};
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		f[0] = a[0];
		int ans = a[0];
		for(int i = 1; i < n; i++){
			f[i] = a[i];
			f[i] = max(f[i], f[i-1] + a[i]);	
			ans = max(ans, f[i]);
		}
		cout << ans << endl;
	}
}
