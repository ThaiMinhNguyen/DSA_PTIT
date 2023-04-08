#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int mx = -1;
		int n;
		cin >> n;
		int a[n];
		int lmin[n];
		int rmax[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		lmin[0] = a[0];
		rmax[n-1] = a[n-1];
		for(int i = 1; i < n; i++){
			lmin[i] = min(a[i], lmin[i-1]);
		}
		for(int i = n-2; i >= 0; i--){
			rmax[i] = max(a[i], rmax[i+1]);
		}
		int i = 0, j = 0;
		while(i < n && j < n){
			if(lmin[i] < rmax[j]){
				mx = max(mx, j-i);
				j++;
			} else {
				i++;
			}
		}
		cout << mx << endl;
	}
}
