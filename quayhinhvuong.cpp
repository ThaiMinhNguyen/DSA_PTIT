#include<bits/stdc++.h>
using namespace std;

string left(string s){
	string t;
	t = s[3] + s[0] + s[2] + s[4] + s[1] + s[5];
	return t;
}

string right(string s){
	string t;
	t = s[0] + s[4] + s[1] + s[3] + s[5] + s[2];
	return t;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int a[6], b[6];
		for(int i = 0; i < 6; i++){
			cin >> a[i];
		}
		for(int i = 0; i < 6; i++){
			cin >> b[i];
		}
		string s, e;
		for(int i = 0; i < 6; i++){
			s += a[i] + '0';
			e += b[i] + '0';
		}
		map<string, int> mp;
		queue<string> q;
		q.push(s);
		while(mp[e] != 1){
			string x = q.front();
			q.pop();
			while(mp[left(s)]!= 1)
		}
	}
}
