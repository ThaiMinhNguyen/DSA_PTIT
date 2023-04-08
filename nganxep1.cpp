#include<bits/stdc++.h>
using namespace std;

void in(stack<int> s){
	stack<int> k;
	if(s.empty() == 1){
		cout << "empty" << endl;
	} else {
		while(!s.empty()){
			int x = s.top();
			k.push(x);
			s.pop();
		}
		while(!k.empty()){
			int x = k.top();
			cout << x << ' ';
			k.pop();
		}
		cout << endl;
	}
}

int main(){
	stack<int> s;
	string l;
	int n;
	while(cin >> l){
		if(l == "push"){
			cin >> n;
			s.push(n);
		} else if(l == "pop"){
			s.pop();
		} else if(l == "show"){
			in(s);
		}
	}
}
