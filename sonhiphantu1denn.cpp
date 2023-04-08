#include<bits/stdc++.h>
using namespace std;

void Bin(int n){
	queue<string> q;
	q.push("1");
	while(n--){
		string s1 = q.front();
		q.pop();
		cout << s1 << " ";
		string s2 = s1;
		q.push(s1 + '0');
		q.push(s2 + '1');
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Bin(n);
		cout << endl;
	}
}
