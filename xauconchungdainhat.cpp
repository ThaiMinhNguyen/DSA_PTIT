#include<bits/stdc++.h>
using namespace std;

int c[1005][1005];

void Check(string a, string b){
	memset(c, 0 , sizeof(c));
	int n = a.length();
	int m = b.length();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i-1] == b[j-1]){
				c[i][j] = c[i-1][j-1] + 1;
			} else {
				c[i][j] = max(c[i][j-1], c[i-1][j]);
			}
		}
	}
	cout << c[n][m] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		Check(a, b);
	}
}
