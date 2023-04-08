#include<bits/stdc++.h>
using namespace std;

#define mod 100000007

long long f[1000] = {0};

long long fi(int n){
	if(n < 2){
		return f[n];
	}
	if(f[n]) return f[n];
	int k;
	if(n%2==1){
		k = (n+1)/2;
		return f[n] = (fi(k)*fi(k)%mod+fi(k-1)*fi(k-1)%mod)%mod;
	} else {
		k = n/2;
		return f[n] = ((2*fi(k-1)%mod + fi(k))*fi(k))%mod;
	}
}

int main(){
	f[0] = 0;
	f[1] = 1;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fi(n) << endl;
	}
}
