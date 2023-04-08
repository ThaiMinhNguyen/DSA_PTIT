#include<bits/stdc++.h>
using namespace std;

int uutien(char c){
	if(c == '+' || c == '-' ) return 2;
	if(c == '*' || c == '/') return 3;
	if(c == '^') return 4;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		string kq = "";
		for(int i = 0; i < s.length(); i++){
			if(isalpha(s[i])){
				kq += s[i];
			}
			else if(s[i] == '('){
				st.push(s[i]);
			} else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
				while(!st.empty() && uutien(s[i]) <= uutien(st.top()))	{
					kq += st.top();
					st.pop();
				}
				st.push(s[i]);
			} else if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					kq = kq + st.top();
					st.pop();						
				}
				st.pop();
			}
		}
		while(!st.empty()){
			if(st.top()!= '('){
				kq += st.top();
			}
			st.pop();
		}
		cout << kq << endl;
	}
}
