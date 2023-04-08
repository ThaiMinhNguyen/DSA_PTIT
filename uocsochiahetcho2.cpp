#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				if(n/i == i){
					if(i%2==0){
						ans++;
					}
				} else {
					if(i%2 == 0){
						ans++;
					}
					if(n/i % 2 == 0){
						ans++;
					}
				}
			}
		}
		if(n % 2 == 0){
			ans++;
		}
		cout << ans << endl;
	}
}
