#include<bits/stdc++.h>
using namespace std;

bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ok = 0;
		for(int i = 2;i <= n/2; i++){
			if(snt(i) && snt(n-i)){
				cout << i << " " << n-i << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			cout << -1 << endl;
		}
	}
}
