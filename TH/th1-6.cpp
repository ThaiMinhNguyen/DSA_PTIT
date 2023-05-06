#include<bits/stdc++.h>
using namespace std;

pair<int , int> a[5001];
long long f[5001][5001] = {0};

int main(){
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v;
	long long res = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	for(int i = 1;i <= n; i++){
		for(int j = 1;j <= m; j++){
			if(j < a[i].first){
				f[i][j] = f[i-1][j];
			} else {
				f[i][j] = max(f[i-1][j], f[i-1][j-a[i].first] + a[i].second);
			}
			res = max(res, f[i][j]);
		}
	}
	cout << res;
}
