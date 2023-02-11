#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<string> s;
	for(int i = 0; i < n; i++){
		string st = "";
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		st = st + "Buoc " + to_string(i) + ":";
		for(int k = 0; k <= i; k++){
			st = st + " " + to_string(a[k]);
		}
		s.push_back(st);
	}
	for(int i = s.size()-1; i >= 0; i-- ){
		cout << s[i] << endl;
	}
}