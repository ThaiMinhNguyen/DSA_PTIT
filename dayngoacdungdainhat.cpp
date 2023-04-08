#include<bits/stdc++.h>
using namespace std;


void check(string s){
	int ans = 0;
	stack<int> st;
	st.push(-1);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		} else {
			st.pop();	
			if(!st.empty()){
				int j = st.top();
				ans = max(ans, i-j);
			} else {
				st.push(i);
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		check(s);
	}
}
