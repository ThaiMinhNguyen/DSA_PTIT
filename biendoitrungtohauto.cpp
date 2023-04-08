#include<bits/stdc++.h>
using namespace std;

int uutien(char c){
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/') return 2;
	if(c == '^') return 3;
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
			if(s[i] == '('){
				st.push(s[i]);
			} else {
				if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
					if(uutien(s[i]) < uutien(st.top()))	{
						kq += st.top();
						st.pop();
					}
					st.push(s[i]);
				} else if(s[i] == ')'){
					while(!st.empty()){
						if(st.top() == '('){
							st.pop();
						} else {
							char k = st.top();
							st.pop();
							kq = kq + k;
						}	
					}
				} else {	
					kq += s[i];
				}
			}
		}
		cout << kq << endl;
	}
}
