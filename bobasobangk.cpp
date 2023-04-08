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
		int check = 0;
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			if(check ==  1){
				break;
			}
			for(int j = i+1; j < n; j++){
				if(a[i] + a[j] > k) break;
				int x = upper_bound(a+j+1, a+n, k - a[i] - a[j]) - a;
				int y = lower_bound(a+j+1, a+n, k - a[i] - a[j]) - a;
				int s = x - y;	
				if(s > 0){
					check = 1;
					break;
				}
			}
		}
		if (check == 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

