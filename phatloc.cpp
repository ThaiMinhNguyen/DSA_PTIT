#include<bits/stdc++.h>
using namespace std;

int n;
int a[20];

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = 6; j<=8; j+=2){
		a[i] = j;
		if(i == 1){
			if(a[i] ==  6){
				continue;
			}
		}
		if(a[i-1] == 6 && a[i-2] == 6 && a[i-3] == 6){
			if(a[i] ==  6){
				continue;
			}
		}
		if(a[i-1] == 8){
			if(a[i] ==  8){
				continue;
			}
		}
		if (i == n){
			if(a[i] == 8){
				continue;
			} else {
				in();
			}
		} else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}