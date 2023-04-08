#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int ok = 0;
		cin >> n;
		int res = 0;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 1){
				ok = 1;
			}
			if(ok == 0){
				res++;
			}
		}	
		cout << res << endl;
	}	
}