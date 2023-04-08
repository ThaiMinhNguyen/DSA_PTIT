#include<bits/stdc++.h>
using namespace std;

string check(string s){
	stack<char> st;
	int check = 0;
	char crt;
	for(auto i : s){
		check = 0;
		if(i == ')'){
			crt = st.top();
			st.pop();
			while(crt != '('){
				if(crt == '+' || crt == '-' || crt == '*' || crt == '/'){
					check = 1;
				}
				crt = st.top();
				st.pop();
			}
			if(check == 0) return "Yes";
		} else {
			st.push(i);
		}
	}
	return "No";
}

int main(){
//	freopen("DATA.in", "r", stdin);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
//		cout << s << endl;	
		cout << check(s) << endl;
	}
}
