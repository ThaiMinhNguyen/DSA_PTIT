#include<bits/stdc++.h>
using namespace std;

int Sort(vector<int> a, int k, int i){
	vector<int> b;
	b = a;
	sort(b.begin()+i, b.begin()+i+k);
	return b[i+k-1];
}

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
			cout << Sort(a, k, i) << " ";
		}
		cout << endl;
	}
}