#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		int a[s.length() +2];
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '('){
				st.push(i);
			} else if(s[i] == ')'){
				if(st.empty()){
					a[i] = -1;
				} else {
					int x = st.top();
					a[x] = 0;
					st.pop();
					a[i] = 1;
				}
			} else {
				a[i] = s[i];
			}
		}
		while(!st.empty()){
			int x = st.top();
			st.pop();
			a[x] = -1;
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i]=='('|| s[i] == ')'){
				cout << a[i];
			} else {
				cout << s[i];
			}
		}
		cout << endl;
	}
}
