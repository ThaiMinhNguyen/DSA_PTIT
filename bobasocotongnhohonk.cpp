#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		long long cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			if(a[i] > k) break;
			for(int j = i+1; j < n; j++){
				int p = lower_bound(a+j+1, a+n, k - a[i] - a[j]) - a;
				if(p > j) cnt += p - j - 1;
				else break;
			}
		}
		cout << cnt << endl;
	}
}
