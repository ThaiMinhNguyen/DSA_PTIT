#include<bits/stdc++.h>
using namespace std;

int a[12], cot[12], c1[20], c2[20], n;
int cnt;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && c1[i-j+n] == 0 && c2[i+j-1] == 0){
			a[i] = j;
			cot[j] = 1;
			c1[i-j+n] = 1;
			c2[i+j-1] = 1;
			if(i == n){
				cnt++;
			} else {
				Try(i+1);
			}
			cot[j] = c1[i-j+n] = c2[i+j-1] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n;
		Try(1);
		cout << cnt << endl;
	}
}
