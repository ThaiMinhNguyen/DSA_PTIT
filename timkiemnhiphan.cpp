#include<bits/stdc++.h>
using namespace std;

int n, k;
int ok = 0;

int BinSearch(int a[], int l, int r){
	if(l > r){
		return -1;
	}	
	int m = (l+r)/2;
	if(k == a[m]){
		ok = 0;
		return m;
	}
	if(k < a[m]){
		return BinSearch(a, l, m-1);
	} else {
		return BinSearch(a, m+1, r);
	}

	return -1;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n >> k;
		int a[n+2];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int r = BinSearch(a, 1, n);
		if(r == -1){
			cout << "NO" << endl;
		} else {
			cout << r << endl;
		}
	}
}
