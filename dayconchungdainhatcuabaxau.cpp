#include<bits/stdc++.h>
using namespace std;

int x, y, z;
int f[102][102][102];
string a, b ,c;

void qhd(){
	memset(f, 0 , sizeof(f));
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			for(int k = 1; k <= z; k++){
				if(a[i-1] == b[j-1] && a[i-1] == c[k-1]){
					f[i][j][k] = f[i-1][j-1][k-1] + 1;
				} else {
					f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));
				}
			}
		}
	}
	cout << f[x][y][z] << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> x >> y >> z;
		cin >> a >> b >> c;
		qhd();
	}
}

