#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long h[n], l[n], r[n];
		stack<int> st;
		for(int i = 0; i < n; i++){
			cin >> h[i];
		}
		st.push(-1);
		for(int i = 0; i < n; i++){
			while(st.size() > 1 && h[st.top()] >= h[i]){
				st.pop();
			}
			l[i] = st.top() + 1;
			st.push(i);
		}	
		while(!st.empty()){
			st.pop();
		}
		st.push(n);
		for(int i = n-1; i >= 0; i--){
			while(st.size() > 1 && h[st.top()] >= h[i]){
				st.pop();
			}
			r[i] = st.top() - 1;
			st.push(i);
		}
		long long ans = 0;
		for(int i = 0; i < n; i++){
			ans = max(ans, h[i]*(r[i] - l[i] + 1));
		}
		cout << ans << endl;
	}
}
