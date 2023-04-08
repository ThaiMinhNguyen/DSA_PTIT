#include<bits/stdc++.h>
using namespace std;

string s;
int f[100];

bool check(char l){
	if('1' <= l && l <= '9'){
		return 1;
	}
	return 0;
}

void qhd(){
	int n =s.length();
	memset(f, 0, sizeof(f));
	if(s[0] == '0'){
		cout << 0 << endl;
		return;
	}
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i <=n; i++){
		if(s[i-1] > '0'){
			f[i] = f[i-1];
		}
		if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')){
			f[i] += f[i-2];
		} 
		if(s[i-1] == '0'){
			if(s[i-2] > '2'){
				cout << 0 << endl;
				return;
			}
		}
	}
	cout << f[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		qhd();
	}
}
