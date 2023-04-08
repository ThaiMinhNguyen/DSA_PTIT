#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int n, a[10000001];


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i= 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long max = 0;
		for(int i = 0; i < n; i++){
			max += (i*a[i])%mod;
			max = max % mod;
		}
		cout << max << endl;
	}
}