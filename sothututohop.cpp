#include<bits/stdc++.h>

using namespace std;

bool sosanh(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[k], b[k];
		for(int i = 0; i < k; i++){
			cin >> b[i];
			a[i] = i+1;
		}
		int count = 0;
		int ok = 1;
		while(ok){
			int i = k-1;
			while(a[i] == n-k+i+1 && i >= 0){
				i--;
			}
			if(i>=0){
				count++;
				if(sosanh(a, b, k)){
					cout << count << endl;
					break;
				}
				a[i]++;
				for(int j = i+1; j < k; j++){
					a[j] = a[j-1]+1;
				}
				
			} else {
				ok = 0;
				count++;
				cout << count << endl;
			}
		}
	}
}