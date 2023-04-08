#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int sum;
		int min_sum = INT_MAX;
//		sort(a, a+n);
//		int r = n-1;
//		int l = 0;
//		while(l < r){
//			sum = a[l] + a[r];
////			cout << sum << endl;
//			if(abs(sum) <= abs(min_sum)){
//				min_sum = sum;
//			}
//			if(sum < 0){
//				l++;
//			}
//			else {
//				r--;
//			}
//		}
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				sum = a[i] + a[j];
				if(abs(sum) < abs(min_sum)){
					min_sum = sum;
				}
			}
		}
		cout << min_sum << endl;
	}
}