#include<bits/stdc++.h>
using namespace std;

void tinh(int n, int a[]){
	int f[1003] = {0};
	f[1] = a[1];
	int ans = a[1];
	for(int i = 2; i <= n; i++){
		f[i] = a[i];
		for(int j = 1; j < i; j++){
			if(a[i] > a[j]){
				f[i] = max(f[i], max(f[j] + a[i], f[j]));
			}
		}
		ans = max(ans, f[i]);	
	}
	cout << ans << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		tinh(n, a);
	}
}
