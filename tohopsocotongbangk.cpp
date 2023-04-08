#include<bits/stdc++.h>
using namespace std;

int a[105], c[105], n, k;
int ok;

void in(int t){
	cout << "[";
	for(int i = 1; i <= t-1; i++){
		cout << a[i] << " ";
	}
	cout << a[t] << "]";
}



void Try(int i, int s){
	for(int j = 1; j <= n; j++){
		if(c[j] >= a[i-1] && s + c[j] <= k){
			a[i] = c[j];
			s += c[j];
			if(s == k){
				ok = 1;
				in(i);
			}
			else { 
				Try(i+1, s);
			} 
			s -= c[j];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> c[i];
		}
		Try(1, 0);
		if(ok == 0){
			cout << -1;
		}
		cout << endl;
	}
}