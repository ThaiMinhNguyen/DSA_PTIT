#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1001][1001];
vector<int> kq;
int CE[100];


int kt(){
	int canh = 0;
	for(int v = 1; v <= n; v++){
		int deg = 0;
		for(int i = 1; i <= n; i++){
			if(a[v][i] == 1){
				deg++;
			}
		}
		if(deg % 2 == 1){
			canh++;
		}
	}
	if(canh > 2){
		return 0;
	} 
	if(canh >= 1){
		return 1;
	}
	return 2;
}

//void EULER(int k){
//	kq.clear();
//	int u;
//	stack<int> st;
//	st.push(k);
//	while(!st.empty()){
//		u = st.top();
//		int ok = 0;
//		for(int i = 1; i <= n; i++){
//			if(a[u][i] == 1){
//				a[u][i] = 0;
//				a[i][u] = 0;
//				st.push(i);
//				ok = 1;
//				break;
//			}
//		}	
//		if(ok == 0){
//			kq.push_back(u);
//			st.pop();
//		}
//	}
//	for(auto l : kq){
//		cout << l << " ";
//	}
//}

void EULER(int u){
	int j = 0;
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		u = st.top();
		int ok = 0;
		for(int i = 1; i <= n; i++){
			if(a[u][i] == 1){
				a[u][i] = 0; a[i][u] = 0;
				st.push(i);
				ok = 1; break;
			}
		}	
		if(ok == 0){
			CE[j] = u ;
			j++ ;
			st.pop();
		}
	}
	for(int i = j-1 ; i >= 0 ; i--){
		cout << CE[i] << " ";
	}
}



int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int x, y;
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
//		for(int i = 1; i <= n; i++){
//			for(int j = 1; j <= n; j++){
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
		EULER(1);
	}
}

