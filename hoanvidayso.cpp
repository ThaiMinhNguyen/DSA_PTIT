#include<bits/stdc++.h>
using namespace std;

int n, a[10001], b[10001];
int used[10001] = {0};

void in(){
	for(int i = 1;i <= n; i++){
		cout << b[a[i]] << " ";
	}
	cout << endl;
}

void Sinh(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			used[j] = 1;
			a[i] = j;
			if(i == n){
				in();
			} else {
				Sinh(i+1);
			}
			used[j] = 0;
		} 
	}
}

void Sinh1(){
	int j = n-1;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	in();
	do{
		in();
	} while(next_permutation(a+1, a+n+1));
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	sort(b, b+n);
	Sinh1();
}