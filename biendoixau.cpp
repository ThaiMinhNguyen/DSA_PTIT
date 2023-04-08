#include<bits/stdc++.h>
using namespace std;

int f[102][102];

void qhd(string s1, string s2){
	memset(f, 0, sizeof(f));
	int n = s1.length();
	int m = s2.length();
	for(int i = 0; i <= n; i++){
		f[i][0] = i;
	}
	for(int i = 0; i <= m; i++){
		f[0][i] = i;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i-1] == s2[j-1]){
				f[i][j] = f[i-1][j-1];
			} else {
				f[i][j] = min(f[i-1][j-1] + 1, min(f[i][j-1], f[i-1][j])+1);
			}
		}
	}
	cout << f[n][m] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		qhd(s1, s2);
	}
}
