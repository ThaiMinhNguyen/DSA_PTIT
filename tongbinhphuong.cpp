#include<bits/stdc++.h>
using namespace std;

//int tinh(int n){
//	int f[10005];
//	f[1] = 1;
//	f[2] = 2;
//	for(int i = 3; i <= 10000; i++){
//		f[i] = i;
//		for(int j = 1; j <= sqrt(i); j++){
//			f[i] = min(f[i], f[i - j*j] + 1);
//		}
//	}
//	cout << f[n] << endl;
//}

int main(){
	int f[10005];
	f[1] = 1;
	f[2] = 2;
	for(int i = 3; i <= 10000; i++){
		f[i] = i;
		for(int j = 1; j <= sqrt(i); j++){
			f[i] = min(f[i], f[i - j*j] + 1);
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}
