#include<bits/stdc++.h>
using namespace std;

int a[100], b[100];
vector<string> ans;
int n, k;

void in(){
	string s = "";
	for(int i = 1; i <= k; i++){
		s = s + to_string(b[a[i]-1]) + " ";
	}
	ans.push_back(s);
}

void Try(int i){
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if(i==k){
			in();
		} else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(b, b+n);
	Try(1);
	sort(ans.begin(), ans.end());
	for(auto x : ans){
		cout << x << endl;
	}
}
