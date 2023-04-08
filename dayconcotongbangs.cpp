#include<bits/stdc++.h>
using namespace std;


void qhd(int a[], int n, int k){
	int f[k+1] = {0};
	f[0] = 1; 
	for(int i = 1; i <= n; i++){
		for(int j = k; j >= a[i]; j--){
			if(f[j] == 0 && f[j - a[i]] == 1){
				f[j] = 1;
			}
		}
	}
	if(f[k] == 1){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[205];
		int n, k;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		qhd(a ,n, k);
	}
}
