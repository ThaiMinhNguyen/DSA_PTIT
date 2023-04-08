#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int check = 1;
		int a[30] = {0};
		vector<int> v;
		int n;
		string s;
		cin >> n >> s;
		for(int i = 0; i < s.size(); i++){
			a[s[i] - 'A']++;
		}
		for(int i =0; i < 30; i++){
			if(a[i] > 0){
				v.push_back(a[i]);
			}
		}
		sort(v.begin(), v.end());
//		for(auto x : v){
//			cout << x << " ";
//		}
		int i = 0; 
		int k = v.size()-1;
		while(i <= k){
			int t = v[k-i];
//			cout << t << endl;
			for(int j = 0; j < t; j++){
				if(i+j*n > s.size()){
					check = -1;
					break;
				}
			}
			i++;
		}
		cout << check << endl;
	}
}
