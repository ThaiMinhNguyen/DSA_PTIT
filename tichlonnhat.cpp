#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	vector<long long> ans;
	long long s1 = a[n-1]*a[n-2]*a[n-3];
	long long s2 = a[n-1]*a[n-2];
	long long s3 = a[0]*a[1]*a[2];
	long long s4 = a[0]*a[1];
	long long s5 = a[n-1]*a[n-2]*a[0];
	long long s6 = a[n-1]*a[1]*a[0];
	ans.push_back(s1);
	ans.push_back(s2);
	ans.push_back(s3);
	ans.push_back(s4);
	ans.push_back(s5);
	ans.push_back(s6);
	sort(ans.begin(), ans.end());
	cout << ans[5];
}
