#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
int b[100];
vector<vector<int>> ans;

void in(vector<int> c){
	for(int i = 0; i < c.size(); i++){
		if(c[i] == 1){
			cout << b[i] << " ";
		}
	}
	cout << endl;
}

void check(){
	int s = 0;
	vector<int> k;
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			k.push_back(b[i]);
		}
	}
	for(int i = 0; i < k.size()-1; i++){
		if(k[i] > k[i+1]){
			s = 1;
			break;
		}
	}
	if(s == 0){
		ans.push_back(a);
	}
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		a.push_back(j);
		if(i == n-1){
			check();
		}
		else {
			Try(i+1);
		}
		a.pop_back();
	}
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	Try(0);
	for(auto x : ans){
		in(x);
	}
}