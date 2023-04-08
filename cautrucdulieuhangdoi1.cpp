#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, m;
		cin >> n;
		queue<int> q;
		while(n--){
			cin >> k;
			if(k == 1){
				cout << q.size() << endl;
			}
			if(k == 2){
				if(q.empty()){
					cout << "YES" << endl;
				} else {
					cout << "NO" << endl;
				}
			}
			if(k == 3){
				cin >> m;
				q.push(m);
			}
			if(k == 4){
				if(!q.empty()){
					q.pop();
				}
			}
			if(k == 5){
				if(!q.empty()){
					cout << q.front() << endl;
				} else {
					cout << -1 << endl;
				}
			}
			if(k == 6){
				if(!q.empty()){
					cout << q.back() << endl;
				} else {
					cout << -1 << endl;
				}
			}
		}
	}
}
