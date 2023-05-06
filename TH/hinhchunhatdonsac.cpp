#include<bits/stdc++.h>
using namespace std;

long long doi(int n, long long h[]){
	long long l[n], r[n];
	stack<int> st;
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
	return ans;
}

int main(){
	int t;
	t = 1;
	while(t--){
		int m, n;
		cin >> m >> n;
		long long h[n];
		long long h1[n];
		for(int i = 0; i < n; i++){
			cin >> h[i];
			h1[i] = m-h[i];
		}
		cout << max(doi(n, h), doi(n, h1));
	}
}
