#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("data.in", "r", stdin);
	int t;
	t = 1;
	while(t--){
		int n;
		cin >> n;
		int a[1005][1005] = {0};
		string s;
		cin.ignore();
		for(int i = 1; i <= n; i++){
			getline(cin , s);
			s+=' ';
			int k = 0;
			for(int j = 0; j < s.length(); j++){
				if(s[j] >= '0' && s[j] <= '9'){
					k = k*10 + s[j] - '0';
				} else {
					a[i][k] = 1;
					k = 0;
				}
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cout << a[i][j] << ' ';
			}	
			cout << endl;
		}
	}
}	
