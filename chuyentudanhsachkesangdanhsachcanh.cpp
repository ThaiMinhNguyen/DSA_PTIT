#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	t = 1;
	while(t--){
		cin >> n;
		int n;
		int a[55][55] =  {0};
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
				if(a[i][j] == 1){
					cout << i << ' ' << j << endl;
					a[j][i] = 0;
				}
//				cout << a[i][j] << endl;
			}	
		}
	}
}	
