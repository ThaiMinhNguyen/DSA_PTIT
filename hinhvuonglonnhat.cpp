#include<bits/stdc++.h>
using namespace std;

int a[502][502];
int f[502][502];
int n, m;

void qhd(){
	int ans = 0;
	for(int i = 0;i < n; i++){
		for(int j = 0; j < m; j++){
			f[i][j] = a[i][j];
			if(a[i][j] == 0){
				continue;
			}			
			if(a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j-1]){
				f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1]))+1;
			}
			ans = max(f[i][j], ans);	
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0;i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		qhd();
	}
}
