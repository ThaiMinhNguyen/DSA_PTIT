#include<bits/stdc++.h>

using namespace std;

bool sosanh(int a[], int b[], int n){
	for(int i= 0; i < n; i++){
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
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> b[i];
			a[i] = i+1;
		}
		int count = 1;
		do{
			if(sosanh(a, b ,n)){
				cout << count;
				break;
			} else {
				count++;
			}
		} while(next_permutation(a, a+n));
		cout << endl;
	}
}