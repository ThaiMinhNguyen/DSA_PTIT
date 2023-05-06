#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+2][n+2] ;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = INT_MAX;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
