#include<bits/stdc++.h>
using namespace std;

int Dem(int x, vector<int> b, int m, int SpOfY[]){
	int ans;
	if(x == 0){
		return 0;
	}
	if(x == 1){
		return SpOfY[0];
	}
	ans = upper_bound(b.begin(), b.end(), x) - b.begin();
	if(x == 2){
		ans -= (SpOfY[3]+SpOfY[4]);
	}
	if(x == 3){
		ans += SpOfY[2];
	}
	return ans;
}

int Tong(vector<int> a, int n, vector<int> b, int m){
	int tong = 0;
	int SpOfY[5] = {0};
	for(int i = 0; i < m; i++){
		if(b[i] < 5){
			SpOfY[b[i]]++;
		}
	}
	for(int i = 0; i < n; i++){
		tong += Dem(a[i], b, m, SpOfY);
	}
	return tong;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(b.begin(), b.end());
		cout << Tong(a , n, b, m) << endl;
	}
}
