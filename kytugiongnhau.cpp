#include<bits/stdc++.h>
using namespace std;

int f[1002];
int n, x, y, z;

void qhd(){
	memset(f, INT_MAX, sizeof(f));
	f[1] = x;
	for(int i = 2; i <=n; i++){
		if(i % 2 == 0){
			f[i] = min(f[i/2] + z, f[i-1] + x);
		} else {
			f[i] = min(f[i/2] + z + x, min(f[i-1] + x, f[(i/2)+1] + z + y));
		}
	}
	cout << f[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x >> y >> z;
		qhd();
	}
}
