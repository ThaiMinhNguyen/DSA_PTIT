#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		stack<int> st;
		vector<int> v;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		v.push_back(-1);
		st.push(a[n-1]);
		for(int i = n-2; i >= 0; i--){
			while(!st.empty() && a[i] >= st.top()){
				st.pop();
			}
			if(st.empty()){
				v.push_back(-1);
			} else {
				v.push_back(st.top());
			}
			st.push(a[i]);
		}
		reverse(v.begin(), v.end());
		for(auto x: v){
			cout << x << " ";
		}
		cout << endl;
	}
}
