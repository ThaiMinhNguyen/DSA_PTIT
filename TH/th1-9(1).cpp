#include<bits/stdc++.h>
using namespace std;

string delSpace(string s){
	string r = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ' '){
			r+=s[i];
		}
	}
	return r;
}
int main(){
	int t;
	string s;
	cin >> t;
	cin.ignore();
	while(t--){
		cin.ignore();
		getline(cin, s);
		s = delSpace(s);
//		cout << s << endl;
		stack<char> st;
		stack<string> k;
		k.push("");
		string kq = "";
		for(int i = 0; i < s.length(); i++){
			if(s[i] == ')'){
				if(st.empty()){
					string x = k.top();
					k.pop();
					x += "-1";
					k.push(x);
					kq += "-1";
					continue;
				}
				if(st.top() == '('){
					string x = k.top();
					k.pop();
					x = '0' + x + '1';
					k.push(x);
					kq = kq + '0';
					st.pop();
				}
			} else if(s[i] == '('){
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			string x = k.top();
			k.pop();
			x = "-1" + x;
			k.push(x);
			kq = "-1" + kq;
			st.pop();
		}
		cout << k.top() << endl;
		int j = 0;
		cout << s << endl;
	}
}

