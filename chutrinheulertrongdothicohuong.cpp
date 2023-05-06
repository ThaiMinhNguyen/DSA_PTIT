#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1001][1001];
vector<int> kq;
int CE[100];
int deg_vao[1001];
int deg_ra[1001];

int kt(){
	memset(deg_vao, 0 , sizeof(deg_vao));
	memset(deg_ra, 0 , sizeof(deg_ra));
	for(int v = 1; v <= n; v++){
		for(int i = 1; i <= n; i++){
			if(a[v][i] == 1){
				deg_vao[i]++;
				deg_ra[v]++;
			}
		}
	}
	for(int v = 1; v <= n; v++){
		if(deg_vao[v] != deg_ra[v]){
			return 0;
		}
	}
	return 1;	
}


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
		}
		cout << kt() << endl;
	}
}

