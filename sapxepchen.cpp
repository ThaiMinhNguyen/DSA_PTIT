#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ; i < n ; i++){
		cin >> a[i];
	}
	cout << "Buoc " << 0 << ": " << a[0] <<endl;
	int key , j , i;
	for(i = 1; i < n; i++){ 
		key = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		cout << "Buoc " << i << ": ";
		for(int l = 0; l <= i; l++){
			cout << a[l] << " ";
		}
		cout << endl;
	}
}
//		cout << "Buoc " << i+1 << ": ";
//		for(auto x:a){
//			cout << x << " ";
//		}
//		cout << endl;
//	for(int i = 0; i < n;i++){
//		sort(a, a+i+1);
//		cout << "Buoc " << i << ": ";
//		for(int j = 0; j <= i; j++){
//			cout << a[j] << " ";
//		}
//		cout << endl;
//	}