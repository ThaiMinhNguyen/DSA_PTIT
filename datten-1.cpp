#include<bits/stdc++.h>
using namespace std;

vector<string> b;
int n, k, a[15];

void in(){
	for(int i = 1; i <= k; i++){
		cout << b[a[i]-1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i-1]+1; j <= b.size()-k+i; j++){
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
	map<string, int> mp;
	string s;
	for(int i = 0; i < n; i++){
		cin >> s;
		mp[s]++;
		if(mp[s] <= 1){
			b.push_back(s);
		}
	}
	sort(b.begin(), b.end());
	Try(1);
//	for(auto x : b){
//		cout << x << " ";
//	}
}