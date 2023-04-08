#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007


long long Large(long n, long k){
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
		int n, k;
		cin >> n >> k;
		cout << Large(n, k) << endl;
	}
}