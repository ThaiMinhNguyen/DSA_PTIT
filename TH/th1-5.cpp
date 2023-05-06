#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int f[n+2][n+2];
		memset(f, 0 , sizeof(f));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(s[i-1] == s[j-1] && i!=j){
					f[i][j] = f[i-1][j-1] + 1;
				} else {
					f[i][j] = max(f[i-1][j], f[i][j-1]);
				}
			}
		}
		cout << f[n][n] << endl;
	}	
}
