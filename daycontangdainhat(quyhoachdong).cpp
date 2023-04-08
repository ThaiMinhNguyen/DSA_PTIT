#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int f[n] = {1};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 1;
	int mx = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i ; j++){
			if(a[j] < a[i]){
				f[i] = max(f[j] + 1, f[i]);
			}
		}
	}
	sort(f, f+n);
	cout << f[n-1];
}
