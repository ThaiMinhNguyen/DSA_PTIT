#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int mx = -1;
		for(int s = 0; s < n - 2; s++){
			int i, k , j;
			i = s;
			k = i;
			while(a[k+1] > a[k] && k < n-1){
				k++;
			} 
//			if(k == i) continue;
			j = k;
			while(a[j+1] < a[j] && j < n-1){
				j++;
			}
//			cout << i << ' ' << k << ' ' << j << endl;
			mx = max(mx, j-i+1);
		}
		cout << mx << endl;
	}
}
