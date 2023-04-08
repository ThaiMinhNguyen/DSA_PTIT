#include<bits/stdc++.h>

using namespace std;

int n, k;

//int search(int a[], int l, int r){
//	if(a[1] > k){
//		return -1;
//	}
//	if(l > r){	
//		return -1;
//	}
//	int m = (l+r)/2;
//	if(k == a[m]){
//		return m;
//	}
//	if(l == r){
//		return m;
//	}
//	if(k < a[m]){
//		return search(a, l , m-1);
//	} else {
//		return search(a, m+1, r);
//	}
//	return -1;
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(k < a[0]){
			cout << -1 << endl;
		} else {	
			int s;
			s = lower_bound(a.begin(), a.end(), k) - a.begin();
			if(a[s] == k){
				cout << s+1 << endl;
			} else {	
				cout << s << endl;
			}
		}
	}
}