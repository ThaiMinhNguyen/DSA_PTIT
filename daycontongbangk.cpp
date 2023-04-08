#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100], b[100];
vector<int> v;
int sum = 0;

void in(){
	for(int i = 0; i < v.size(); i++){
		if(v[i] == 1){
			cout << a[i] << " ";
		}	
	}
	cout << endl;
}

void Try(int i){
	for(int j = 0 ; j <= i; j++){
		b[i] = j;
		v.push_back(j);
		if(v[i] == 1){
			sum += a[i];
			cout << sum << endl;
		}
		if(sum == k){
			in();
		}
		if(sum > k){
			continue;
		}
		if(i == n){
			continue;
		} 
		else{
			Try(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int crs = 0;
		int check = 0;
		for(int i = 0; i < n; i++){
			int j = i+1;
			crs += a[i];
			if(crs > k){
				cout << -1;
			}
			if(crs == k){
				cout << a[i];
				check = 1;
			}
			while(j < n){
				crs += a[j];
				if(crs > k){
					j++;
					crs-=a[j];
				}
				if(crs == k){
					cout << a[i];
					check = 1;
					j = i
				}
			}
		}
	}
}