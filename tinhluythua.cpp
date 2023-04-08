#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long Power(int n, long long k){
	if(k == 0){
		return 1;
	}
	long long s = Power(n, k/2) % mod;
	s = (s*s) % mod;
	if(k % 2 == 1){
		s = (n*s) % mod;
	}
	return s;
}

int main(){
	int a;
	long long b;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0){
			return 0;
		}
		cout << Power(a, b) << endl;
	}
	return 0;
}
