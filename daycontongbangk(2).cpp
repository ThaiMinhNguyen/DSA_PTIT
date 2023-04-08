#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
int b[100];
int check = 0;
vector<vector<int>> ans;

void in(vector<int> c){
	cout << "[";
	vector<int> s;
	for(int i = 0; i < c.size(); i++){
		if(c[i] == 1){
			s.push_back(b[i]);
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(i < s.size()-1){
			cout << s[i] << " ";
		} else {
			cout << s[i];
		}
	}
	cout << "] ";
}

void sum(){
	int s = 0;
	for(int i = 0; i < n; i++){
		s += b[i]*a[i];
	}
	if(s == k){
		ans.push_back(a);
	}
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		a.push_back(j);
		if(i == n-1){
			sum();
		}
		else {
			Try(i+1);
		}
		a.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){		
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		sort(b, b+n);
		Try(0);
		if(ans.size() == 0){
			cout << -1;
		} else {
			for(auto x : ans){
				in(x);
			}
			ans.erase(ans.begin(), ans.end());
		}
		cout << endl;
	}
}