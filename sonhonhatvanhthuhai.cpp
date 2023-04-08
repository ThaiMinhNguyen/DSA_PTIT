#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		if(s.size() < 2){
			cout << -1 << endl;
		} else {
			int c = 2;
			for(auto x : s){
				if(c == 0){
					break;
				}
				c--;
				cout << x << " ";
			}
			cout << endl;
		}
	}
}