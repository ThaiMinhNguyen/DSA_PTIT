#include<bits/stdc++.h>
using namespace std;

int n;
int a[100003];
int f[100003];

int main(){
	int res = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
        f[a[i]] = f[a[i] - 1] + 1;
        res = max(res, f[a[i]]);
    }
	cout << n - res;
}
