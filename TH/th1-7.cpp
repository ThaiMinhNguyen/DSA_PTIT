#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == ' ') continue;
			if(s[i] == '('){
				st.push(s[i]);
			}
			
		}
	}
}
