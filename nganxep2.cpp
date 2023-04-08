#include<bits/stdc++.h>
using namespace std;

void in(stack<int> s){
	stack<int> k;
	if(s.empty() == 1){
		cout << "NONE" << endl;
	} else {
		cout << s.top() << endl;
	}
}

int main(){
	stack<int> s;
	int t;
	cin >> t;
	string l;
	int n;
	while(t--){
		
		cin >> l;
			if(l == "PUSH"){
				cin >> n;
				s.push(n);
			} else if(l == "POP" && s.size() > 0){
				s.pop();
			} else if(l == "PRINT"){
				in(s);
			}
	}
}
