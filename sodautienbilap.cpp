#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int> mp;
		int a[n];
		int check = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			if(mp[a[i]] > 1){
				cout << a[i] << endl;
				check = 1;
				break;
			}
		}
		if(check == 0){
			cout << "NO" << endl;
		}
	}
}
