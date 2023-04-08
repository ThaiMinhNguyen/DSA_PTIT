#include<bits/stdc++.h>
using namespace std;

int m = 1e9+7;
long long c[1002][1002];
int n, k;

void qhd(){
	long long ans = 1;
	memset(c, 0, sizeof(c));
	if(k > n){
		cout << 0 << endl;
	} else {
		for(int i = n-k+1; i <= n; i++){
			ans = (ans * i) % m;
		}
		cout << ans << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		qhd();
	}
}
