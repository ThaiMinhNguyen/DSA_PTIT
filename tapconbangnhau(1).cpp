#include<bits/stdc++.h>
using namespace std;

int n, a[102], b[102];
int sum;
long long c;
int check = 0;


int Try(int i){
	for(int j = 0; j<=1; j++){
		b[i] = j;
		sum += b[i]*a[i];
		if(sum == c/2){
			check = 1;
			return 0;
		}
		if (sum <= c/2){ 
			Try(i+1);
		} 
		sum -= b[i]*a[i];
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		c = 0;
//		sum = 0;
		check = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			c += a[i];
		}
		if(c%2 == 1){
			cout << "NO" << endl;
		} else {	
			Try(1);
			if(check == 1){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
}