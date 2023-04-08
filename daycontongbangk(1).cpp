#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
int b[100];
int check = 0;

void in(){
	int last = 0;
	for(int i = n-1; i >= 0; i--){
		if(a[i] == 1){
			last = i;
			break;
		}
	}
	cout << "[";
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			cout << b[i];
			if(i < last){
				cout << " ";
			}
		}
	}
	cout << "] ";
}

bool sum(){
	int s = 0;
	for(int i = 0; i < n; i++){
		s += b[i]*a[i];
	}
	if(s == k){
		return 1;
	}
	return 0;
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		a[i] = j;
		if(i == n-1){
			if(sum() == 1){
				check = 1;
				in();
			}
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){		
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		sort(b, b+n);
		Try(0);
		if(check == 0){
			cout << -1;
		}
		cout << endl;
	}
}