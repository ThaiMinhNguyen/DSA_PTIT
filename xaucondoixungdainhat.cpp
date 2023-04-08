#include<bits/stdc++.h>
using namespace std;

int c[1002][1002];
void qhd(string s){
	memset(c, 0, sizeof(c));
	int ans = 1;
	int n = s.length();
	for(int i = n-1; i >= 0; i--){
		for(int j = i ; j < n; j++){
			if(j == i){
				c[i][j] = 1;
			} else {
				if(s[i] == s[j]){
					if(j - i == 1){
						c[i][j] = 1;
					}
					else{
						c[i][j] = c[i+1][j-1];
					}
				}
			}
			
			if(c[i][j]){
				ans = max(ans, j-i+1);
			}
		}
	}
	cout << ans << endl;
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
