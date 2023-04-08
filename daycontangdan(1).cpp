#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
int b[100];
vector<string> ans;

void in(vector<int> c){
	string s = "";
	for(int i = 0; i < c.size(); i++){
		if(c[i] == 1){
			s += to_string(b[i]) + " ";
		}
	}
	ans.push_back(s);
}

bool check(){
	int s = 0;
	vector<int> k;
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			k.push_back(b[i]);
		}
	}
	if(k.size() < 2){
		return 0;
	}
	for(int i = 0; i < k.size()-1; i++){
		if(k[i] > k[i+1]){
			return 0;
		}
	}
	return 1;
}

void Try(int i){
	for(int j = 0; j <=1; j++){
		a.push_back(j);
		if(i == n-1){
			if(check()){
				in(a);
			}
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
	sort(ans.begin(), ans.end());
	for(auto x : ans){
		cout << x;
		cout << endl;
	}
}