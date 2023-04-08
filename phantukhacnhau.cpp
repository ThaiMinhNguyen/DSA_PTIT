#include<bits/stdc++.h>
using namespace std;

int res;

int BinSearch(vector<long long> a, vector<long long> b, int n){
	int ok = 0;
	int l = 0;
	int r = n-2;
	int m;
	while(l <= r){
		m = (l+r)/ 2;
		if(a[m] != b[m]){
			res = m;
			r = m - 1;
		}
		else{
			l = m + 1;
		}	
	}
	return res;
}

void Bsearch(int l, int r, vector<long long> a, vector<long long> b){
	int m = (l+r)/2;
	if(l <= m){	
		if(a[m] != b[m]){
			res = m;
			Bsearch(l, m-1, a, b);
		} else {
			Bsearch(m+1, r, a, b);
		}
	}
//	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<long long> a(n), b(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++){
			cin >> b[i];
		}
		if(a[0] != b[0]){
			cout << 1 << endl;
		}
		else if(a[n-1] != b[n-2]){
			cout << n << endl;
		} else {
			Bsearch(0, n-2, a, b);
			cout <<  res + 1 << endl;
		}
	}
} 