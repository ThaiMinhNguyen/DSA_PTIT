#include<bits/stdc++.h>
using namespace std;

void in(stack<string> s){
	while(!s.empty()){
		string x = s.top();
		cout << x << " ";
		s.pop();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a;
		queue<int> q;
		stack<string> s;
		for(int i = 0; i < n; i++){
			cin >> a;
			q.push(a);
		}
		for(int i = 0; i < n; i++){
			string st = "[";
			for(int j = n-i; j > 0; j--){
				int x = q.front();
				st += to_string(x);
				if(j>1) st += ' ';
				q.pop();
				x += q.front();
				if(j>1) {
					q.push(x);
				}
			}
			st += ']';
			s.push(st);
		}
		in(s);
		cout << endl;
	}
}