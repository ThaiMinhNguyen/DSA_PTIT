#include<bits/stdc++.h>

using namespace std;

void in(int a[], int n){
	for(int i = 0; i < n;i++){
		cout << a[i];
	}
	cout << " ";
}

void sinh(int n){
	int a[n];
	for(int i =0 ; i < n;i++){
		a[i] = i+1;
	}
	in(a, n);
	int ok = 1;
	while(ok){
		int i = n-1;
		while(i >=0 && a[i] > a[i+1]){
			i--;
		}
		if(i>=0){
			int j = n-1;
			while(a[j] < a[i] && j > i){
				j--;
			}
			swap(a[i], a[j]);
			reverse(a+i+1, a+n);
			in(a, n);
		} else {
			ok = 0;
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		sinh(n);
	}
}