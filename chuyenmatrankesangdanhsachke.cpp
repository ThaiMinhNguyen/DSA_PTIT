#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
vector<int> Ke[1001];

int main(){
	int t;
	t = 1;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
				if(a[i][j] == 1) {
					Ke[i].push_back(j);
				}
			}
		}
		for(int i = 1; i <= n; i++){
			for(auto x : Ke[i]){
				cout << x << ' ';
			}
			cout << endl;
		}
	}
}	
