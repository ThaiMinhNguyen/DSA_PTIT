#include<bits/stdc++.h>
using namespace std;

char Try(int n, long long k){
	long long ss = pow(2, n-1);
	if(k == ss) return 'A' + (n-1);
	if(k < ss){
		return Try(n-1, k);
	} else {
		return Try(n-1, k-ss);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << Try(n, k) << endl;
	}
}