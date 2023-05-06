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
		stack<string> st;
		string kq = "";
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				string y = st.top();
				st.pop();
				string x = st.top();
				st.pop();
				x = '(' + x + s[i] + y + ')';
				st.push(x);
			} else {
				st.push(string(1, s[i]));
			}
		}
		cout << st.top() << endl;
	}
}
