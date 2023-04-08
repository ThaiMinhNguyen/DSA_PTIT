#include<bits/stdc++.h>
using namespace std;

int m[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n;

int tien(){
	int count = 0;
	for(int i = 9; i >= 0; i--){
		int s = n / m[i];
		count += s;
		n -= s*m[i];
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << tien() << endl;
	}
}