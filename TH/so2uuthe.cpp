#include<bits/stdc++.h>
using namespace std;

int n;


void check(string s){
	int k = s.length();
	int cnt = 0;
	for(int i  = 0; i < k; i++){
		if(s[i] == '2'){
			cnt++;
		}
	}
	if(cnt*2 > k){
		n--;
		cout << s << ' ';
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		queue<string> q;
		string s;
		q.push("1");
		q.push("2");
		while(n > 0){
			s = q.front();
			q.pop();
			check(s);
			q.push(s + '0');
			q.push(s + '1');
			q.push(s + '2');
		}
		cout << endl;
	}
}
