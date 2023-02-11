#include<bits/stdc++.h>

using namespace std;

bool kt(string s){
	if(s[0] == 'A' || s[s.size()-1] == 'H') return 0;
	for(int i = 0; i < s.size()-1;i++){
		if(s[i] == 'H' && s[i+1] == 'H') return 0;
	}
	return 1;
}

void in(string s){
	for(int i = 0; i < s.size();i++){
		cout << s[i];
	}
	cout << endl;
}

void sinh(int n){
	string st = "";
	string ed = "";
	for(int i = 0 ; i < n; i++){
		st += 'A';
		ed += 'H';
	}
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
				st[i] = 'H';
			} else {
				st[i] = 'A';
			}
		}
		if(kt(st))in(st);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		sinh(n);
	}
}

