#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		int a[n+k];
		for(long long i = 0; i < n+k; i++){
			cin >> a[i];
		}
		sort(a, a+n+k);
		for(long long i = 0; i < n+k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}