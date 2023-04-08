#include<bits/stdc++.h>
using namespace std;


char Try(int n, long long k, long long a[]){
	if(n == 1) return '0';
	if(n == 2) return '1';
	if(k <= a[n-2]){
		return Try(n-2, k, a);
	} else {
		return Try(n-1, k-a[n-2], a);
	}
}

int main(){
	long long a[93];
	a[1] = 1;
	a[2] = 1;
	for(int i = 3; i < 93; i++){
		a[i] = a[i-2] + a[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << Try(n, k, a) << endl;
	}
}