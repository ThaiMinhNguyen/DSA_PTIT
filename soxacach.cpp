#include<bits/stdc++.h>
using namespace std;

int a[100];
int used[100] = {0};
int n;

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

bool check(){
	for(int i = 2; i <= n; i++){
		if(abs(a[i]- a[i-1]) == 1){
			return 0;
		}
	}
	return 1;
}

void Sinh(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	do{
		if(check()){
			in();
			cout << endl;
		}
	} while(next_permutation(a+1, a+n+1));
}

void Try(int i){
	if(i > n){
		if(check()){			
			in();
			cout << endl;
		}
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
		cin >> n;
		Try(1);
		cout << endl;
	}
}