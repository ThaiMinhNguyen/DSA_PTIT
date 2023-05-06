#include<bits/stdc++.h>
using namespace std;

queue<string> q;
vector<string> ans[1005];

bool check(string s){
	int cnt = 0;
	for(int i  = 0; i < s.length(); i++){
		if(s[i] == '2'){
			cnt++;
		}
	}
	if(cnt*2 > s.length()){
		cout << s << ' ';
	}
}

void giai(){
	q.push("1");
	q.push("2");
	ans.push_back("2");
	while(ans.size() < 1005){
		string s = q.front();
		if(check(s))
	}
}
