#include<bits/stdc++.h>

using namespace std;

void in(string s){
	for(int i = 0; i < s.size();i++){
		cout << s[i];
	}
	cout << " ";
}

void sinh(int n){
	string st = "";
	string ed = "";
	for(int i = 0 ; i < n; i++){
		st += 'A';
		ed += 'B';
	}
	in(st);
	int j = -1;
	while(st != ed){
		for(int i = n-1; i >= 0; i--){
			if(st[i] == 'A'){
				j = i;
				break;
			}
		}
		for(int i = j;i < n; i++){
			if(st[i] == 'A'){
				st[i] = 'B';
			} else {
				st[i] = 'A';
			}
		}
		in(st);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		sinh(n);
		cout << endl;
	}
}

