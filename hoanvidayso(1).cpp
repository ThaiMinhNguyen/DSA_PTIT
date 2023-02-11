#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> b;

void in(){
	for(auto x : b){
		cout << x << " ";
	}
	cout << endl;
}

void Sinh1(){
	do{
		in();
	} while(next_permutation(b.begin(), b.end()));
}

int main(){
	cin >> n;
	int s;
	for(int i = 0; i < n; i++){
		cin >> s;
		b.push_back(s);
	}
	sort(b.begin(), b.end());
	Sinh1();
}