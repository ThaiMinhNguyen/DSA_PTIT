#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[3] = {0};
		int m;
		for(int i = 0; i < n; i++){
			cin >> m;
			a[m]++;
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0 ; j < a[i]; j++){
				cout << i <<  " ";
			}
		}
		cout << endl;
	}
}
