#include<bits/stdc++.h>

using namespace std;

bool kt(string s, int k, int a[]){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			sum += a[i];
		}
	}
	if(sum == k) return 1;
	else return 0;
}	

void in(string s, int a[]){
	for(int i = 0; i < s.size();i++){
		if(s[i] == '1'){
			cout << a[i] << " ";
		}
	}
	cout << endl;
}

void sinh(int n, int a[], int k){
	int sum = 0;
	string st = "";
	string ed = "";
	for(int i = 0 ; i < n; i++){
		st += '0';
		ed += '1';
	}
	if(kt(st, k, a) == 1){
		sum++;
		in(st, a);
	}
	while(st != ed){
		int j = 0;
		for(int i = n-1; i >= 0; i--){
			if(st[i] == '0'){
				j = i;
				break;
			}
		}
		for(int i = j;i < n; i++){
			if(st[i] == '0'){
				st[i] = '1';
			} else {
				st[i] = '0';
			}
		}
		if(kt(st, k, a) == 1){
			sum++;
			in(st, a);
		}
	}
	cout << sum;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sinh(n, a, k);
}

