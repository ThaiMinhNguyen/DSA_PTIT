#include<bits/stdc++.h>
using namespace std;


void move(int n, char a, char b, char c){
	if(n==1){
		cout << a << " -> " << c << endl;
		return;
	}
	move(n-1, a, c ,b);
	move(1, a, b, c);
	move(n-1, b, a ,c);
}

int main(){
	char a = 'A';
	char b = 'B';
	char c = 'C';
	int n;
	cin >> n;
	move(n, a, b ,c);
}