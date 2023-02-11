#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n){
	cout << '[';
	for(int i = 0; i < n-1; i++){
		cout << a[i] << " ";
	}
	cout << a[n-1] << ']' << endl;
}

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
		do{
			in(a, n);
			for(int i = 0; i < n; i++){	
				a[i] += a[i+1];
			}
			n--;
		} while (n > 0);
	}
}