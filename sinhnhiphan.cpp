#include<bits/stdc++.h>

using namespace std;

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
	int j = -1;
	while(st != ed){
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
		in(st);
	}
}

int main(){
	int n;
	cin >> n;
	sinh(n);
}

