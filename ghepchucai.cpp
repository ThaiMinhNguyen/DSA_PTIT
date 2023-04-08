#include<bits/stdc++.h>
using namespace std;

int a[30];
int used[30] = {0};
char c;
int n;

int ck(int k){
	if(k == 1 || k == 5){
		return 1;	
	}
	return 0;
}

bool check(){
	for(int i = 1; i <= n; i++){
		if(ck(a[i]) == 1){	
			if(i == 1 || i == n){
				continue;
			}
			if(ck(a[i-1]) == 0 && ck(a[i+1]) == 0){
				return 0;
			}
		}
	}
	return 1;
}

void in(){

	if(check()){
		for(int i = 1; i <= n; i++){
			cout << char(a[i]- 1 + 'A');
		}
		cout << endl;	
	}
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
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}