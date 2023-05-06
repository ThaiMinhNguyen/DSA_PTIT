#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		stack<char> al;
		string kq = "";
		for(int i = 0; i < s.length(); i++){
			if(s[i] == ')'){
				if(st.empty()){
					kq += "-1";
					continue;
				}
				if(st.top() == '('){
					kq = kq + '0';
//					string x = "";
//					while(!al.empty()){
//						x = al.top() + x;
//						al.pop();
//					}
					kq = kq + '1';
					st.pop();
				}
			} else if(isalpha(s[i])) {
				al.push(s[i]);
			} else {
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			kq = "-1" + kq;
			st.pop();
		}
		cout << kq << endl;
	}
}
