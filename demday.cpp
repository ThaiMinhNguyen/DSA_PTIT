#include<bits/stdc++.h>
using namespace std;

#define mod 123456789


long long Large(int n, long long k){
	if(k == 1){
		return n;
	}
	long long a = Large(n, k/2) % mod;
	a = (a*a)%mod;
	if(k%2==1){
		a = (a*n)%mod;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << Large(2, n-1) << endl;
	}
}