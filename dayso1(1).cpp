#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a;
		queue<int> q;
		for(int i = 0; i < n; i++){
			cin >> a;
			q.push(a);
		}
		for(int i = 0; i < n; i++){
			cout << '[';
			for(int j = n-i; j > 0; j--){
				int x = q.front();
				cout << x;
				if(j>1) cout << " ";
				q.pop();
				x += q.front();
				if(j>1) q.push(x);
			}
			cout << ']' << endl;
		}
	}
}