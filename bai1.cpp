#include<bits/stdc++.h>
using namespace std;

string n;
int used[100] = {0};
int a[100];
int b[100];

void in(){
	for(int i = 1; i <= n.size(); i++){
		if(i == 1){
			if(b[a[i]] != 0){
				cout << b[a[i]];
			}
		} else {
			cout << b[a[i]];
		}
	}
	cout << endl;
}

//void in(){
//	for(int i = 1; i <= n.size(); i++){
//		cout << a[i];
//	}
//	cout << endl;
//}

void Try1(int i){
	if(i > n.size()){
		in();
	}
	for(int j = 1; j <= n.size(); j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			Try1(i+1);
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int s = n.size();
		for(int i = 0; i < s; i++){
			b[i+1] = (int)(n[i] - '0');
		}
		sort(b+1, b+s+1);
//		for(int i = 0; i < s; i++){
//			cout << b[i+1] << " ";
//		}
		Try1(1);
	}
}
