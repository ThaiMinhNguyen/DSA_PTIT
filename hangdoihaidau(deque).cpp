#include<bits/stdc++.h>
using namespace std;

int main(){
	deque<int> q;
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k;
		if(s == "PUSHFRONT"){
			cin >> k;
			q.push_front(k);
		}
		if(s == "PUSHBACK"){
			cin >> k;
			q.push_back(k);
		}
		if(s == "PRINTFRONT"){
			if(q.empty()){
				cout << "NONE" << endl;
			} else {
				cout << q.front() << endl;
			}
		}
		if(s == "POPFRONT"){
			if(!q.empty()){
				q.pop_front();
			}
		}
		if(s == "PRINTBACK"){
			if(q.empty()){
				cout << "NONE" << endl;
			} else {
				cout << q.back() << endl;
			}
		}
		if(s == "POPBACK"){
			if(!q.empty()){
				q.pop_back();
			}
		}
	}
}

