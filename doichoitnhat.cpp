#include<bits/stdc++.h>
using namespace std;

int CountSort(int a[], int n){
	int ans = 0;
	int min = INT_MAX;
	for(int i = 0; i < n-1; i++){
		min = i+1;
		for(int j = i+1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		if(a[i] > a[min]){
			swap(a[i], a[min]);
			ans++;
		}
	}
	return ans;
}

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
		cout << CountSort(a, n) << endl;
	}
}
