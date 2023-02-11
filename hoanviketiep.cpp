#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int j = n-2;
		while(a[j] > a[j+1] && j >= 0){
			j--;
		}
		if(j >= 0){	
			int i = n-1;
			while(a[i] < a[j]){
				i--;
			}
			swap(a[i], a[j]);
			int l = j+1;
			int r = n-1;
			while(r>l){
				swap(a[l], a[r]);
				l++, r--;
			}
			for(int i = 0; i < n; i++){
				cout << a[i] << " ";
			}
		} else {
			for(int i = 1; i <= n; i++){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}