#include<bits/stdc++.h>
using namespace std;


int n ;
int a[30][30];
string s;
int check;


void Try(int i, int j){
	if(a[i+1][j] == 1){
		s += 'D';
		Try(i+1, j);
		s.pop_back();
	}
	if(a[i][j+1] == 1){
		s += 'R';
		Try(i, j+1);
		s.pop_back();
	}
	if(i == n-1 && j == n-1){
		cout << s << " ";
		check = 1;
	} 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		if(a[0][0] == 0){
			cout << -1;
		} else {
			Try(0,0);
			if(check == 0){
				cout << -1;
			}
		}
		cout << endl;
	}
}