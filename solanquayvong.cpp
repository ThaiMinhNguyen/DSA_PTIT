#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int s = find(a, a+n, n) - a;
		if(s < n-1){
			cout << s + 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}

