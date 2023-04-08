#include<bits/stdc++.h>
using namespace std;

long long n;

void in(){
	queue<long long> q;
	long long c = 1;
	while(c%n != 0){
		q.push(c*10);
		q.push(c*10 + 1);
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
