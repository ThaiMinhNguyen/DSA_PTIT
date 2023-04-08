#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int s = find(a, a+n, k) - a;
		if(s == n){
			cout << -1 << endl;
		} else {
			cout << s+1 << endl;
		}
	}
}