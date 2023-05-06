#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int ans = 0;
int n, m;
vector<int> st;

void Try(int i, int j){
	if(i == n && j == m){
		st.push_back(ans);
		return;
	}
	while(i < n && j < m){
		ans += a[i][j];
		Try(i, j+1);
		Try(i+1, j);
		Try(i+1, j+1);
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		st.clear();
		Try(1, 1);
		sort(st.begin(), st.end());
		cout << st[0] << endl;	
	}
}
