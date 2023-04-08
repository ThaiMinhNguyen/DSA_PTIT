#include<bits/stdc++.h>
using namespace std;

int n;
int a[30];

long long Cvt(string s){
	long long n = 0;
	for(int i = 0;i < s.size() - 1; i++){
		n += (s[i] - '0');
		n*=10;
	}
	n += (s[s.size()-1]-'0');
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		string x, y;
		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				x += to_string(a[i]);
			} else {
				y += to_string(a[i]);
			}
		}
		cout << Cvt(x) + Cvt(y) << endl;
	}
}