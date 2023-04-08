#include<bits/stdc++.h>
using namespace std;

//	Dem so lan xuat hien cua so o vi tri thu k cua day gap doi (??)

//int sum = 0;
//
//void count(int n, long long k){
//	long long s = 
//}
//
//int Try(int n, long long k){
//	long long s = pow(2, n-1);
//	if(k == s){
//		return 1;
//	}
//	if(k < s){
//		return Try(n-1, k);
//	} 
//	if(k > s){
//		return Try(n-1, k) + Try(n-1, k-s);
//	}	
//	return Try(n-1, k) + Try(n-1, k-s);
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		sum = 0;
//		int n;
//		long long k;
//		cin >> n >> k;
//		cout << Try(n, k);
//		cout << sum << endl;
//	}
//}

//	Gap doi day so

//int Try(int n, long long k){
//	long long s = pow(2, n-1);
//	if(k == s) return n;
//	if(k < s){
//		return Try(n-1, k);
//	} else {
//		return Try(n-1, k-s);
//	}
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		long long k;
//		cin >> n >> k;
//		cout << Try(n, k) << endl;
//	}
//}

void Try1(int i){
	if(i > n){
		in();
	}
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			Try(i+1);
			used[j] = 0;
		}
	}
}

void Try(int i){
	for(int j = a[i-1]+1; j <= b.size()-k+i; j++){
		a[i] = j;
		if(i==k){
			in();
		} else {
			Try(i+1);
		}
	}
}








