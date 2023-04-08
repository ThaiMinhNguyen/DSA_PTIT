#include<bits/stdc++.h>
using namespace std;


int max(int a, int b, int c){
	return max(max(a, b), c);
}

int maxMid(int a[], int l, int m, int r){
	int sum = 0;
	int sum_left = INT_MIN;
	for(int i = m; i >= l; i--){
		sum += a[i];
		if(sum > sum_left){
			sum_left = sum;
		}
	}
	int sum_right = INT_MIN;
	sum = 0;
	for(int i = m + 1; i <= r; i++){
		sum += a[i];
		if(sum > sum_right){
			sum_right = sum;
		}
	}
	return sum_left + sum_right;
}


int maxSub(int a[], int l, int r){
	if(l == r) return a[l];
	int m = (l+r)/2;
	return max(maxSub(a, l, m), maxSub(a, m+1, r), maxMid(a, l, m, r));	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 1; i <= n;i++){
			cin >> a[i];
		}
		int max_all = maxSub(a, 1, n);
		cout << max_all << endl;
	}
}