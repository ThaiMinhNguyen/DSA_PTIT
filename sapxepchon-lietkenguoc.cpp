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
	for(int i = 0; i < n-1; i++){
		string st = "";
		int min = i;
		for(int j = i+1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		swap(a[i], a[min]);
		st = st + "Buoc " + to_string(i+1) + ":";
		for(int i = 0; i < n; i++){
			st = st + " " + to_string(a[i]);
		}
		s.push_back(st);
//		for(auto x : a){
//			cout << x << " ";
//		}
	}
	for(int i = s.size()-1; i >= 0; i-- ){
		cout << s[i] << endl;
	}
}