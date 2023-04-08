#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int dau;
		int cuoi;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				dau = i;
				break;
			}
		}
		for(int i = n-1; i >= 0; i--){
			if(a[i] != b[i]){
				cuoi = i;
				break;
			}
		
		}
		cout << dau + 1 << " " << cuoi + 1 << endl;
	}
}
