#include<bits/stdc++.h>
using namespace std;

char a[2] = {'0', '2'};
string s = "000";
vector<string> d, y;

void push(){
	y.push_back(s);
}

void Sinh(int i){
	for(int j = 0; j < 2; j++){
		s[i] = a[j];
		if(i == 2){
			y.push_back(s);
		} else {
			Sinh(i+1);
		}
	}
}

int main(){
	Sinh(0);
	d.push_back("02");
	d.push_back("20");
	d.push_back("22");
	for(auto x : d){
		for(auto k : y){
			cout << x << "/02/2" << k << endl;
		}
	}
}

