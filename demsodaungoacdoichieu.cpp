#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int ans = 0;
		string s;
		cin >> s;
		stack<char> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '('){
				st.push(s[i]);
			} else {
				if(st.empty()){
					ans++;
//					cout << '(' << endl;
					st.push('(');
				} else {
					st.pop();
				}
			}
		}
		int k = st.size()/2;
		ans += k;
		cout << ans << endl;
	}
}

