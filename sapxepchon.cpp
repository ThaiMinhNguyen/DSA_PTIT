#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n-1;i++){
		int min = i;
		for(int j = i+1; j < n;j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		swap(a[i], a[min]);
		cout << "Buoc " << i+1 << ": ";
		for(auto x:a){
			cout << x << " ";
		}
		cout << endl;
	}
	
}