#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				st.push(s[i] - '0');
			} else {
				int y = st.top();
				st.pop();
				int x = st.top();
				st.pop();
				if(s[i] == '+'){
					x = x+y;
				}
				if(s[i] == '-'){
					x = x-y;
				}
				if(s[i] == '*'){
					x = x*y;
				}
				if(s[i] == '/'){
					x = x/y;
				}
				st.push(x);
			}
		}
		cout << st.top() << endl;
	}
}
