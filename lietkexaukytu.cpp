#include<bits/stdc++.h>
using namespace std;

int k;
char c;
int n;
char a[30];
int b[30];

void in(){
	for(int i = 1; i <= k; i++){
//		cout << b[i];
		cout << (char) ('A' + b[i]);
	}
	cout << endl;
}

void Try(int i){
	for(int j = b[i - 1]; j <= n; j++){
		b[i] = j;
		if(i == k){
			in();
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> c >> k;
	n = c - 'A';
	Try(1);
}