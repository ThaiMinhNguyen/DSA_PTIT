#include<bits/stdc++.h>
using namespace std;

int n;

void in(){
	queue<int> q;
	int c = 9;
	while(c%n != 0){
		q.push(c*10 + 0);
		q.push(c*10 + 9);
		c = q.front();
		q.pop();
	}
	cout << c << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		in();
	}
}
