#include<bits/stdc++.h>
using namespace std;

char dayFi(long long k, int n, long long f[]){
	if(n == 1){
		return 'A';
	} 
	if(n == 2){
		return 'B';
	}
	if(k <= f[n-2]){
		return dayFi(k, n-2, f);
	} else {
		return dayFi(k-f[n-2], n-1, f);
	}
}

int main(){
	long long f[93];
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i < 93; i++){
		f[i] = f[i-2] + f[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << dayFi(k, n, f) << endl;
	}
}