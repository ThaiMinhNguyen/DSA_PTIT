#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a[101];
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	for(int i = 3; i <= 100; i++){
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}
