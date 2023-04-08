#include<bits/stdc++.h>
using namespace std;


long long Doi(long long k, long long n){
	long long ss = pow(2,n-1);
	if(k == ss) return n;
	if(k < ss) return Doi(k, n-1);
	if(k > ss) return Doi(k-ss, n-1);
}


int main(){
	int t; cin >> t;
	long long k;
	long long n;
	while(t--){
		cin >> n >> k;
		cout << Doi(k, n) << endl;
	}
}