#include<bits/stdc++.h>
using namespace std;

int f[102][102];

void qhd(string s){
	int ans = 0;
	int n = s.length();
	memset(f, 0 ,sizeof(f));
	int t;
	for(int i = n-1; i >= 0; i--){
		for(int j = i; j < n; j++){
			if(i == j){
				f[i][i] = 1;
			} else {
				if(s[i] == s[j]){				
					f[i][j] = f[i+1][j-1]+2;
				} else {
					f[i][j] = max(f[i+1][j], f[i][j-1]);
				}
			}
			ans = max(ans, f[i][j]);
		}
	}
	cout << n - ans << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		qhd(s);
	}
}


