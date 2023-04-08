#include<bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;

void tinh(int n, int k){
	long long f[100003] = {0};
	f[0] = 1;
	f[1] = 1;
	for(int i = 2;i <= n; i++){
		for(int j = 1; j <= min(i, k); j++){
			f[i] = (f[i] + f[i-j])%m;
		}
	}
	cout << f[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		tinh(n, k);
	}
}
