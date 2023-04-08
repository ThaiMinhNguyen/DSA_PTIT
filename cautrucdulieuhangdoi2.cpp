#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	int t;
	string s;
	cin >> t;
	while(t--){	
		int k;
		cin >> s;
		if(s == "PUSH"){
			cin >> k;
			q.push(k);
		} else if(s == "POP"){
			if(!q.empty()){
				q.pop();
			}
		} else if(s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front() << endl;
			} else {
				cout << "NONE" << endl;
			}
		}
	}
}
