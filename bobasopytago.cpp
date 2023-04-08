#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			a[i] = a[i]*a[i];
		}
		sort(a, a+n);
		int check = 0;
		for(int i = 0; i < n; i++){
			if(check == 1){
				break;
			}
			for(int j = i+1; j < n; j++){
				int x = upper_bound(a+j+1, a+n, a[i] + a[j]) - a;
				int y = lower_bound(a+j+1, a+n, a[i] + a[j]) - a;
				int s = x - y;	
				if(s > 0){
					check = 1;
					break;
				}
//				int s = find(a+j+1, a+n, a[i] + a[j]) - a;
//				if(s < n){
//					check = 1;
//					break;
//				}
			}
		}
		if(check == 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}