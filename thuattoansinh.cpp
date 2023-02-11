#include<bits/stdc++.h>

using namespace std;

bool kt(string s){
	for(int i = 0; i <= s.size()/2; i++){
		if(s[i] != s[s.size()-1-i]){
			return 0;
		}
	}
	return 1;
}

void in(string s){
	for(int i = 0; i < s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;
}

void sinh(int n){
	string st = "";
	string ed = "";
	for(int i = 0 ; i < n; i++){
		st += '0';
		ed += '1';
	}
	in(st);
	while(st != ed){
		int j = 0;
		for(int i = n-1; i >= 0; i--){
			if(st[i] == '0'){
				j = i;
				break;
			}
		}
		for(int i = j;i < n; i++){
			if(st[i] == '0'){
				st[i] = '1';
			} else {
				st[i] = '0';
			}
		}
		if(kt(st) == 1){
			in(st);
		}
	}
}

int main(){
	int n;
	cin >> n;
	sinh(n);
}

