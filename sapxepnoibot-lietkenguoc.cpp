#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<string> s;
		int n;
		cin >> n;
		int a[n];
		for(int i =0 ; i < n ; i++){
			cin >> a[i];
		}
		int check = 1;
		int j = 0;
		while(check){
			string st = "";
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
			st = st + "Buoc " + to_string(j) + ":";
			for(int i = 0; i < n; i++){
				st = st + " " + to_string(a[i]);
			}
			s.push_back(st);
		}
		for(int i = s.size()-1; i >= 0; i-- ){
			cout << s[i] << endl;
		}
	}
}
