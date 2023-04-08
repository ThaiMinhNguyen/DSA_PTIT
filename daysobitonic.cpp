#include<bits/stdc++.h>
using namespace std;

int inc[102];
int decr[102];
int k[102];
int a[102];
int n;

void qhd(){
	int ans = 0;
	memset(inc, 0, sizeof(inc));
	memset(decr, 0, sizeof(decr));
	for(int i = 1;i <= n; i++){
		inc[i] = a[i];
		for(int j = 1; j < i; j++){
			if(a[j] < a[i]){
				inc[i] = max(inc[i], inc[j] + a[i]);
			}
		}
	}
	for(int i = n;i >= 0; i--){
		decr[i] = a[i];
		for(int j = n; j > i; j--){
			if(a[i] > a[j]){
				decr[i] = max(decr[i], decr[j] + a[i]);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		k[i] = inc[i]+decr[i]-a[i];
		ans = max(ans, k[i]);
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		qhd();
	}
}
