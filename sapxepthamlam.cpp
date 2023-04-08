#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[100], b[100];
		int check = 1;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		for(int i = 0; i < n; i++){
			if(a[i] != b[i] && a[i]!= b[n-1-i]){
				check = 0;
				cout << "No" << endl;
				break;
			}
		}
		if(check == 1){
			cout << "Yes" << endl;
		}
	}
}