#include<bits/stdc++.h>
using namespace std;

set<char> sc;	
string s;


void St(int l, int r){
	int m = (l+r)/2;
	if(l == r){
		sc.insert(s[m]);
		return;
	}
	else {
		St(l, m);
		St(m+1, r);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> s;
			St(0, s.size()-1);
		}
		for(auto x: sc){
			cout << x << " ";
		}
		sc.clear();
		cout << endl;
	}
}