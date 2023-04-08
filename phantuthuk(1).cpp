#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> m >> n >> k;
		vector<int> a(m), b(n), c(n+m);
		for(int i = 0; i < m; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
		c = unique(c.begin(), c.end());		
		cout << c[k-1] << endl;
	}
}