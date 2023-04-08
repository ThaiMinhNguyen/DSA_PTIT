#include<bits/stdc++.h>
using namespace std;

int main(){
//	freopen("DATA.in", "r", stdin);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		stack<string> st;
		getline(cin , s);
		stringstream is(s);
		while(is >> s){
			st.push(s);
		}
		while(!st.empty()){
			s = st.top();
			cout << s << " ";
			st.pop();
		}
		cout << endl;
	}
}
