#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k];
		int ok = 1;
		for(int j = 0; j < k; j++){
			a[j] = j+1;
			cout << a[j];
		}
		cout << " ";
		while(ok){
			int i = k-1;
			while(a[i] == n-k+i+1 && i >= 0){
				i--;
			}
			if(i>=0){
				a[i]++;
				for(int j = i+1; j < k; j++){
					a[j] = a[j-1]+1;
				}
				for(int j = 0; j < k; j++){
					cout << a[j];
				}
				cout << " ";
			} else {
				ok = 0;
			}
		}
		cout << endl;	
	}
}