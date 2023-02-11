#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k];
		for(int i = 0; i < k; i++){
			cin >> a[i];
		}
		int j = -1;
		for(int i = k-1; i >= 0; i--){
			if(a[i] < (n-k+i+1)){
				j = i;
				break;
			}
		}
		if(j >= 0){
			a[j] = a[j]+1;
			for(int i = j + 1; i < k; i++){
				a[i] = a[i-1] + 1;
			}
			for(int i = 0; i < k; i++){
				cout << a[i] << " ";
			}	
		}
		else {
			for(int i = 1; i <= k; i++){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}