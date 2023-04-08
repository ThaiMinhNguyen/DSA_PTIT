#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				string y = st.top();
				st.pop();
				string x = st.top();
				st.pop();
				x = x + y;
				x = s[i] + x;
				st.push(x);
			} else {
				st.push(string(1, s[i]));
			}
		}
		cout << st.top() << endl;
	}
}
