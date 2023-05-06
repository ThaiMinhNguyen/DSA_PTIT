#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, q;
	cin >> n >> q;
	string s = string(n, '0');
	for(int l = 0; l < q; l++){
		int x, y;
		cin >> x >> y;
		for(int i = x-1; i < y; i++){
			if(s[i] == '0'){
				s[i] = '1';
			} else {
				s[i] = '0';
			}
		}	
	}
	for(auto k : s){
		cout << k << ' ';
	}
}
