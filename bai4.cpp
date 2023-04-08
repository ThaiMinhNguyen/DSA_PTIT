#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[300001];
int b[300001];
int cnt = 0;

void in(){
	if(b[a[1]] == b[a[2]]){
		cnt++;
		cout << a[1] << a[2] << endl;
	}
}


//void in(){
//	cout << a[1] << a[2] << endl;
//}

void Try(int i){
	for(int j = a[i-1]+1; j <= j+k; j++){
		a[i] = j;
		if(i==2){
			in();
		} else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	string s;
	for(int i = 1; i <= n;i++){
		cin >> s;
		b[i] = s.size();
	}
	Try(1);
	cout << cnt << endl;
}
