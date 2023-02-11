#include<bits/stdc++.h>
using namespace std;

int ok = 1;
int n, k;
vector<int> a;
int b[21];
map<int, int> mp;
int cnt = 0;

void in(){
	for(int i = 1;i <= k; i++){
		cout << a[b[i] - 1] << " ";
	}
	cout << endl;
}

void Sinh(){
	for(int j = 1; j <= k; j++){
		cout << b[j] << " ";
	}
	cout << endl;
	do{
		int i = k;
		while(i >=0 && b[i] == cnt - k + i){
			i--;
		}
		if(i >= 0){
			b[i]= b[i]+1;
			for(int j = i+1; j <= k ; j++){
				b[j] = b[j-1]+1;
			}
			for(int j = 1; j <= k; j++){
				cout << a[b[j]-1] << " ";
			}
			cout << endl;
		} else {
			ok = 0;
		}
	} while(ok == 1);
}

void Try(int i){
	for(int j = b[i-1]+1 ; j <= cnt-k+i;j++){
		b[i]=j;
		if(i==k){
			in();
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	int s;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(mp[s] == 0){
			a.push_back(s);
			mp[s]++;
			cnt++;
		}
	}
//	for(int j = 1; j <= k; j++){
//		b[j] = j;
//	}
	sort(a.begin(), a.end());
//	Sinh();
	Try(1);
}

