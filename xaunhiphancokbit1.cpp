#include<bits/stdc++.h>

using namespace std;

bool kt(string s, int k){
	int sum = 0;
	for(int i = 0; i < s.size();i++){
		if(s[i] == '1'){
			sum++;
		}
		if(sum > k) return 0;
	}
	if(sum == k) return 1;
	else return 0;
}

void in(string s){
	for(int i = 0; i < s.size();i++){
		cout << s[i];
	}
	cout << endl;
}

void sinh(int n, int k){
	string st = "";
	string ed = "";
	for(int i = 0 ; i < n; i++){
		st += '0';
		ed += '1';
	}
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
		if(kt(st, k))in(st);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		sinh(n, k);
	}
}

