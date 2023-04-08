#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1000][1000];
int cnt;



void Try(int i, int j){
	if(j < n){
		Try(i, j+1);
	}
	if(i < m){
		Try(i+1, j);
	}
	if(i == m && j == n){
		cnt++;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> m >> n;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		Try(1, 1);
		cout << cnt << endl;
	}
}