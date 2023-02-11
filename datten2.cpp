#include<bits/stdc++.h>
using namespace std;

int n;
int k;
int a[60];
char b[60];

void in(){
	for(int j = 1; j <= k; j++){
		cout << b[a[j]];
	}
	cout << endl;
}

void sinh(int i){
	for(int j = a[i-1]+1; j <= n - k + i ; j++){
		a[i] = j;
		if(i == k){
			in();
		} else {
			sinh(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		b[1] = 'A';
		for(int i = 2; i <= n; i++){
			b[i] = b[i-1] + 1;
		}
		sinh(1);
	}
}