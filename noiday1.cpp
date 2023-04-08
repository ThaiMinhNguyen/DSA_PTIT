#include<bits/stdc++.h>
using namespace std;


void print_queue(priority_queue<int, vector<int>, greater<int>> q)
{
    priority_queue<int, vector<int>, greater<int>> temp = q;
    while (!temp.empty()) {
        cout << temp.top()<<" ";
        temp.pop();
    }
    cout << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<int, vector<int>, greater<int>> a;
		int x;
		for(int i =0; i < n; i++){
			cin >> x;
			a.push(x);
		}
		long long sum = 0;
		int first, second;
		while(a.size() > 1){
			first = a.top();
			a.pop();
			second = a.top();
			a.pop();
			first += second;
			sum += first;
			a.push(first);
//			print_queue(a);
		}
		cout << sum << endl;
	}
}
