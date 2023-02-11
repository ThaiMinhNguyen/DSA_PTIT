#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ; i < n ; i++){
		cin >> a[i];
	}
	int check = 1;
	int j = 0;
	while(check){
		j++;
		check = 0;
		for(int i = 0; i < n-1; i++){
			if(a[i] > a[i+1]){
				check = 1;
				swap(a[i], a[i+1]);
			}
		}
		if(check == 0){
			break;
		}
		cout << "Buoc " << j << ": ";
		for(int i =0 ; i < n ; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
