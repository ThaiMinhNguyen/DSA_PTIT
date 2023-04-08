#include<bits/stdc++.h>

using namespace std;

int n, k;

int search(long long a[], int l, int r){
	if(a[1] > k){
		return -1;
	}
	if(l > r){	
		return -1;
	}
	if(a[r] < k){
		return r;
	}
	int m = (l+r)/2;
	if(k == a[m]){
		return m;
	}
	if(m > 0 && a[m - 1] <= k && a[m] > k){
		return m-1;
	}
	if(k < a[m]){
		return search(a, l , m-1);
	} else {
		return search(a, m+1, r);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		long long a[n+2];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int s = search(a, 1, n);
		cout << s << endl;
	}
}