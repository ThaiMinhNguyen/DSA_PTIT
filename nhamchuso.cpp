#include<bits/stdc++.h>
using namespace std;

string n, m;

int Cvt(string s){
	int n = 0;
	for(int i = 0;i < s.size() - 1; i++){
		n += (s[i] - '0');
		n*=10;
	}
	n += (s[s.size()-1]-'0');
	return n;
}

string Ftos(string k){
	string s = k;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
	return s;
}

string Stof(string k){
	string s = k;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	return s;
}

int min(){
	string n1 = Stof(n);
	string m1 = Stof(m);
	int sum = Cvt(n1) + Cvt(m1);
	return sum;
}

int max(){
	string n1 = Ftos(n);
	string m1 = Ftos(m);
	int sum = Cvt(n1) + Cvt(m1);
	return sum;
}

int main(){
	cin >> n >> m;
//	cout << Cvt(n);
	cout << min() << ' ';
	cout << max();
}