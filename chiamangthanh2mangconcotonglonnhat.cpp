#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[60];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int c = n-k;
		if(c < k){
			swap(c, k);
		}
		int l = 0;
		int r = 0;
		for(int i = 0; i < k; i++){
			l += a[i];
		}
		for(int i = k; i < n; i++){
			r += a[i];
		}
		cout << r - l << endl;
	}
}