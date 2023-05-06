#include<bits/stdc++.h>
using namespace std;

long long doi(string s){
	long long res = 0;
	if(s[0] == '-'){
		for(int i = 1; i < s.length(); i++){
			res += s[i] - '0';
			res*=10;	
		}
		res = -res;
	} else {
		for(int i = 0; i < s.length(); i++){
			res += s[i] - '0';
			res*=10;	
		}
	}
	return res/10;
}

bool check(string s){
	if(s[0] >= '0' && s[0] <= '9'){
		return 1;
	}
	return 0;
}

int main(){
//	cout << doi("123") << endl;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> v;
		while(n--){
			string s;
			cin >> s;
			v.push_back(s);
		}
		stack<long long> st;
		for(int i = v.size()-1; i >= 0; i--){
			if(v[i].size() > 1 || check(v[i])){
				st.push(doi(v[i]));
			} else {
				long long x = st.top();
				st.pop();
				long long y = st.top();
				st.pop();
				if(v[i] == "+"){
					x = x+y;
				}
				if(v[i] == "-"){
					x = x-y;
				}
				if(v[i] == "*"){
					x = x*y;
				}
				if(v[i] == "/"){
					x = x/y;
				}
				st.push(x);
			}
		}
		cout << st.top() << endl;
	}
}
