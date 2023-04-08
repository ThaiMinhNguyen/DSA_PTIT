#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second != b.second){
		return a.second > b.second;
	} else{
		return a.first < b.first;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int k;
		int a[10002] = {0};
		vector<int> v;
		vector<pair<int, int>> vp;
		for(int i = 0; i < n; i++){
			cin >> k;
			if(a[k] == 0){
				v.push_back(k);		
			}
			a[k]++;
		}
		for(int i = 0; i < v.size(); i++){
			vp.push_back(make_pair(v[i], a[v[i]]));
		}
		sort(vp.begin(), vp.end(), cmp);
		for(auto x : vp){
			for(int i = 0; i < x.second; i++){
				cout << x.first << " ";
			}
		}
		cout << endl;
	}
}