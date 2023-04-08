#include<bits/stdc++.h>
using namespace std;

int n;

void in(){
	vector<string> v;
	queue<string> q;
	string c;
	q.push("6");
	q.push("8");
	while(c.length() <= n){
		c = q.front();
		q.push(c+'6');
		q.push(c+'8');
		q.pop();
		v.push_back(c);
	}
	for(int i = v.size()-2; i >= 0; i--){
		cout << v[i] << ' ';
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		in();
	}
}
