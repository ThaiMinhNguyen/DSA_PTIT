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
		st.push(-1);
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
			while(st.size() > 1 && a[i] >= a[st.top()]){
				st.pop();
			}
			v.push_back(i - st.top());
			st.push(i);
		}
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}

