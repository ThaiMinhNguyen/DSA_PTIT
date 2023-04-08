#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a;
		int m;
		for(int i = 0; i < n; i++){
			cin >> m;
			a.push_back(m);
		}
		for(int i = 0; i < n-k+1; i++){
			int max = a[i];
			for(int j = i+1; j < i+k; j++){
				if(max < a[j]){
					max = a[j];
				}
			}
			cout << max << " ";
		}
		cout << endl;
	}
}
