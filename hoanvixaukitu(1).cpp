#include<bits/stdc++.h>
using namespace std;

int used[100] = {0};
string s;
int n;
int a[20];

void in(){
	for(int l = 1; l <= n; l++){
		cout << s[a[l]-1];
	}
	cout << " ";
}

void Try(int i){
	if(i > n){
		in();
	}
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			Try(i+1);
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		Try(1);
		cout << endl;
	}
}