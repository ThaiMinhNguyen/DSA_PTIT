#include<bits/stdc++.h>
using namespace std;

long long f[1000004];
int a[1000005];
int n;

void qhd(){
	memset(f, 0, sizeof(f));
	f[1] = a[1];
	for(int i = 2; i <= n; i++){
		f[i] = max(f[i-2] + a[i], f[i-1]);
	}
	cout << f[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <=n ; i++){
			cin >> a[i];
		}
		qhd();
	}
}
