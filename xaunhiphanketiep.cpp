#include<bits/stdc++.h>

using namespace std;

void sinh(string st){
	int j = 0;
	for(int i = st.size()-1; i >= 0; i--){
		if(st[i] == '0'){
			j = i;
			break;
		}
	}
	for(int i = j;i < st.size(); i++){
		if(st[i] == '0'){
			st[i] = '1';
		} else {
			st[i] = '0';
		}
	}
	cout << st << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n;i++){
		string s;
		cin >> s;
		sinh(s);
	}
}

