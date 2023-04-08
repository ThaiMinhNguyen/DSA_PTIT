#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long ReverseI(long long k){
	string s = to_string(k);
	reverse(s.begin(), s.end());
	long long n = stoll(s);
	return n;
}

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
		long long n, k;
		cin >> n;
		k = ReverseI(n);
		cout << Large(n, k) << endl;
	}
}