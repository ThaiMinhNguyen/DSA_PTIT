#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sum = 0;
		int a[n];
		for(int i =0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		int check = 0;
		int suml = 0;
		int sumr = sum; 
		for(int i = 0; i < n; i++){
			sumr -= a[i];
			suml = sum - sumr -a[i];
			if(sumr == suml){
				check = 1;
				cout << i+1 << endl;
				break;
			}
		}
		if(check == 0){
			cout << -1 << endl;
		}
	}	
}