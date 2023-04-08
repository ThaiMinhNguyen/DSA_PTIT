#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> v;
		stack<int> st;
		for(int i = n-1; i >= 0 ; i--){
			if(st.size() == 0){
				v.push_back(-1);
			}
			else if(!st.empty() && st.top() > a[i]){
				v.push_back(st.top());
			} else if(!st.empty() && st.top() <= a[i]){
				while(!st.empty() && st.top() <= a[i]){
					st.pop();
				}
				if(st.empty()){
					v.push_back(-1);
				} else {
					v.push_back(st.top());
				}
			}
			st.push(a[i]);
		}
		reverse(v.begin(), v.end());
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
