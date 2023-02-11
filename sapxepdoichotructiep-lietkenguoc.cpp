#include<bits/stdc++.h>

using namespace std;

void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<string> s;
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[i] > a[j]){
					swap(a[i], a[j]);
				}
			}
			string k = "";
			k = k + "Buoc " + to_string(i+1) + ":";
			for(int l = 0; l < n; l++){
				k = k + " " + to_string(a[l]);
			}
			s.push_back(k);
		}
		for(int i = s.size()-1; i >=0; i--){
			cout << s[i] << endl;
		}
	}
}