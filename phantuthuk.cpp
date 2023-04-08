#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void merge(int left, int mid, int right){
	int t[100001];
	int i = left; 
	int j = mid + 1;
	int k = left;
	while(i <= mid && j <= right){
		if(a[i] < a[j]){
			t[k++] = a[i++];
		} else {
			t[k++] = a[j++];
		}
	}
	while(i <= mid){
		t[k++] = a[i++];
	}
	while(j <= right){
		t[k++] = a[j++];
	}
	for(int i = left; i <= right; i++){
		a[i] = t[i];
	}
}

void MergeSort(int left, int right){
	if(left >= right){
		return;
	}
	int mid = left + (right - left)/2;
	MergeSort(left, mid);
	MergeSort(mid+1, right);
	merge(left, mid, right);
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> m >> n >> k;
		int s = n + m;
		a.resize(s+1);
		for(int i = 1; i <= s; i++){
			cin >> a[i];
		}
		MergeSort(1, s);
		cout << a[k] << endl;
	}
}