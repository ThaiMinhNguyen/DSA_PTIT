#include<bits/stdc++.h>
using namespace std;
int m = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+1];
		int f[k+1] = {0};
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		f[0] = 1;
		for(int i = 1; i <= k; i++){
			for(int j = 1; j <= n; j++){
				if(a[j] <= i){
					f[i] = (f[i] + f[i-a[j]]) % m;
				}
			}
		}
		cout << f[k] << endl;
	}
}
