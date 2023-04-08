#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long sum = 0;
		sort(a, a+n);
		for(int i = 0; i < n-1; i++){
			int x = lower_bound(a+i+1, a+n, k + a[i]) - a;
//			int y = upper_bound(a+i+1, a+n, k + a[i]) - a;
//			cout << x << ' ';
			sum += (x - i - 1);
		}
		cout << sum << endl;
	}
}
