#include<bits/stdc++.h>
using namespace std;

string s;

void check(){
	stack<char> k;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			k.push(s[i]);
		}
		else {
			if(k.empty()){
				cout << "NO" << endl;
				return;
			}
			if(s[i] == ')'){
				if(k.top() == '('){
					k.pop();
				}
				else {
					cout << "NO" << endl;
					return;
				}
			}
			if(s[i] == '}'){
				if(k.top() == '{'){
					k.pop();
				}
				else {
					cout << "NO" << endl;
					return;
				}
			}
			if(s[i] == ']'){
				if(k.top() == '['){
					k.pop();
				}
				else {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	if(k.size() == 0){
		cout << "YES" << endl;
		return;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		check();
	}
}
