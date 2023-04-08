#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		int a[n];
		for(int i =0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n-1; i++){
			s.insert(a[i+1]-a[i]);
		}
		for(auto x : s){
			cout << x << endl;
			break;
		}
	}	
}