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
		sort(a, a+n);
		for(int i = n-1; i > (n-1)/2; i--){
			cout << a[i] << " " << a[n-1-i] << " ";
		}
		if(n%2 != 0){
			cout << a[(n-1)/2] << endl;
		} else {
			cout << endl;
		}
	}
}
