#include<bits/stdc++.h>

using namespace std;

void in(string s){
	for(int i = 0; i < s.size();i++){
		cout << s[i];
	}
	cout << endl;
}

void sinh(string st){
	int j = -1;
	for(int i = st.size()-1; i >= 0; i--){
		if(st[i] == '1'){
			j = i;
			break;
		}
	}
	if(j == -1){
		for(int i = 0; i < st.size(); i++){
			st[i] = '1';
		}	
		in(st);
	} else {
		for(int i = j;i < st.size(); i++){
			if(st[i] == '1'){
				st[i] = '0';
			} else {
				st[i] = '1';
			}
		}
		in(st);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		sinh(s);
	}
}

